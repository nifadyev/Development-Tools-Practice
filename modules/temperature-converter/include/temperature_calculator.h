// Copyright 2018 Nifadyev Vadim

#ifndef MODULES_TEMPERATURE_CONVERTER_INCLUDE_TEMPERATURE_CALCULATOR_H_
#define MODULES_TEMPERATURE_CONVERTER_INCLUDE_TEMPERATURE_CALCULATOR_H_

#include <string>

class TemperatureCalculator {
 public:
    TemperatureCalculator();
    std::string operator()(int argc, const char** argv);

 private:
    void help(const char* appname, const char* message = "");
    bool validateNumberOfArguments(int argc, const char** argv);
    std::string message_;
    typedef struct {
        double current_temperature;
        char current_scale;
        char desired_scale;
        const char* output_filename;
    } Arguments;
};

#endif  // MODULES_TEMPERATURE_CONVERTER_INCLUDE_TEMPERATURE_CALCULATOR_H_
