// Copyright 2018 Nifadyev Vadim

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/temperature_calculator.h"

int main(int argc, const char** argv) {
    TemperatureCalculator app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
