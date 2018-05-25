// Copyright 2018 Nifadyev Vadim

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <string>
#include <sstream>

#include "include/temperature_converter.h"
#include "include/temperature_calculator.h"

TemperatureCalculator::TemperatureCalculator() : message_("") {}

void TemperatureCalculator::help(const char *appname,
                                 const char *message) {
    message_ =
        std::string(message) +
        "This is a temperature calculator application.\n\n" +
        "Please provide arguments in the following format:\n\n" +

        "  $ " + appname + " <current_temperature> <current_scale> " +
        "<desired_scale>\n\n" +

        "Where current_temperature is double-precision number, " +
        "current_scale is one of 'C', 'F', 'K', 'N'" +
        "and <desired_scale> is one of 'C', 'F', 'K', 'N'.\n";
}

bool TemperatureCalculator::validateNumberOfArguments(int argc,
                                                      const char** argv) {
    if (argc == 1) {
        help(argv[0]);
        return false;
    } else if (argc != 4) {
        help(argv[0], "ERROR: Should be 3 arguments.\n\n");
        return false;
    }
    return true;
}

double parseDouble(const char* arg) {
    char* end;
    double value = strtod(arg, &end);

    if (end[0]) {
        throw std::string("Wrong number format!");
    }

    return value;
}

char parseChar(const char* arg) {
    char scale;

    if (strcmp(arg, "C") == 0) {
        scale = 'C';
    } else if (strcmp(arg, "F") == 0) {
        scale = 'F';
    } else if (strcmp(arg, "K") == 0) {
        scale = 'K';
    } else if (strcmp(arg, "N") == 0) {
        scale = 'N';
    } else {
        throw std::string("Wrong scale format!");
    }

    return scale;
}

std::string TemperatureCalculator::operator()(int argc, const char** argv) {
    Arguments args;

    if (!validateNumberOfArguments(argc, argv)) {
        return message_;
    }
    try {
        args.current_temperature = parseDouble(argv[1]);
        args.current_scale       = parseChar(argv[2]);
        args.desired_scale       = parseChar(argv[3]);
    }
    catch(std::string& str) {
        return str;
    }

    TemperatureConverter sourceConverter(args.current_temperature,
                                         args.current_scale);

    TemperatureConverter resultConverter;

    std::ostringstream stream;
    switch (args.desired_scale) {
     case 'C':
        resultConverter = sourceConverter.convert(sourceConverter, 'C');
        stream << "Converted temperature = " <<
               resultConverter.getCurrentTemperature() << " "
               << "Scale = C" << std::endl;
        break;
     case 'F':
        resultConverter = sourceConverter.convert(sourceConverter, 'F');
        stream << "Converted temperature = " <<
               resultConverter.getCurrentTemperature() << " "
               << "Scale = F" << std::endl;
        break;
     case 'K':
        resultConverter = sourceConverter.convert(sourceConverter, 'K');
        stream << "Converted temperature = " <<
               resultConverter.getCurrentTemperature() << " "
               << "Scale = K" << std::endl;
        break;
     case 'N':
        resultConverter = sourceConverter.convert(sourceConverter, 'N');
        stream << "Converted temperature = " <<
               resultConverter.getCurrentTemperature() << " "
               << "Scale = N" << std::endl;
        break;
    }

    message_ = stream.str();

    return message_;
}
