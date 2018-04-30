// Copyright 2018 Nifadyev Vadim

#include <iostream>
#include <string>

#ifndef MODULES_LENGTH_CONVERTER_INCLUDE_LENGTH_CONVERTER_H_
#define MODULES_LENGTH_CONVERTER_INCLUDE_LENGTH_CONVERTER_H_

class LengthConverter {
 public:
    LengthConverter();
    ~LengthConverter();

    double centimetersToMeters(double centimeters);
    double metersToCentimeters(double meters);

    double metersToKilometers(double meters);
    double kilometersToMeters(double kilometers);

    double kilometersToMiles(double kilometers);
    double milesToKilometers(double miles);

    double footToYards(double foot);
    double yardsToFoot(double yards);

    double metersToFoot(double meters);
    double footToMeters(double foot);

    double centimetersToInches(double centimeters);
    double inchesToCentimeters(double inches);

    double metersToNauticalMiles(double meters);
    double nauiticalMilesToMeters(double nauticalMiles);

    double kilometersToAstronomicalUnits(double kilometers);
    double astronomicalUnitsToKilometers(double astronomicalUnits);

    double centimetersToSpans(double centimeters);
    double spansToCentimeters(double spans);

    double spansToVersts(double spans);
    double verstsToSpans(double versts);

 private:
     bool isCorrect(double value);
};

#endif  // MODULES_LENGTH_CONVERTER_INCLUDE_LENGTH_CONVERTER_H_
