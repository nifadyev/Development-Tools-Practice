// Copyright 2018 Nifadyev Vadim

#include "include/length-converter.h"

LengthConverter::LengthConverter() { }

LengthConverter::~LengthConverter() { }

double LengthConverter::centimetersToMeters(double centimeters) {
    if (!isCorrect(centimeters)) {
        throw "Error! Invalid argument";
    }
    return centimeters / 100;
}

double LengthConverter::metersToCentimeters(double meters) {
    if (!isCorrect(meters)) {
        throw "Error! Invalid argument";
    }
    return meters * 100;
}

double LengthConverter::metersToKilometers(double meters) {
    if (!isCorrect(meters)) {
        throw "Error! Invalid argument";
    }
    return meters / 1000;
}

double LengthConverter::kilometersToMeters(double kilometers) {
    if (!isCorrect(kilometers)) {
        throw "Error! Invalid argument";
    }
    return kilometers * 1000;
}

double LengthConverter::kilometersToMiles(double kilometers) {
    if (!isCorrect(kilometers)) {
        throw "Error! Invalid argument";
    }
    return kilometers / 1.609344;
}

double LengthConverter::milesToKilometers(double miles) {
    if (!isCorrect(miles)) {
        throw "Error! Invalid argument";
    }
    return miles * 1.609344;
}

double LengthConverter::footToYards(double foot) {
    if (!isCorrect(foot)) {
        throw "Error! Invalid argument";
    }
    return foot / 3;
}

double LengthConverter::yardsToFoot(double yards) {
    if (!isCorrect(yards)) {
        throw "Error! Invalid argument";
    }
    return yards * 3;
}

double LengthConverter::footToMeters(double foot) {
    if (!isCorrect(foot)) {
        throw "Error! Invalid argument";
    }
    return foot / 0.3048;
}

double LengthConverter::metersToFoot(double meters) {
    if (!isCorrect(meters)) {
        throw "Error! Invalid argument";
    }
    return meters * 0.3048;
}

double LengthConverter::centimetersToInches(double centimeters) {
    if (!isCorrect(centimeters)) {
        throw "Error! Invalid argument";
    }
    return centimeters / 2.54;
}

double LengthConverter::inchesToCentimeters(double inches) {
    if (!isCorrect(inches)) {
        throw "Error! Invalid argument";
    }
    return inches * 2.54;
}

double LengthConverter::metersToNauticalMiles(double meters) {
    if (!isCorrect(meters)) {
        throw "Error! Invalid argument";
    }
    return meters / 1852;
}

double LengthConverter::nauiticalMilesToMeters(double nauticalMiles) {
    if (!isCorrect(nauticalMiles)) {
        throw "Error! Invalid argument";
    }
    return nauticalMiles * 1852;
}

double LengthConverter::kilometersToAstronomicalUnits(double kilometers) {
    if (!isCorrect(kilometers)) {
        throw "Error! Invalid argument";
    }
    return kilometers / 149597870.7;
}

double LengthConverter::astronomicalUnitsToKilometers
       (double astronomicalUnits) {
    if (!isCorrect(astronomicalUnits)) {
        throw "Error! Invalid argument";
    }
    return astronomicalUnits * 149597870.7;
}

double LengthConverter::centimetersToSpans(double centimeters) {
    if (!isCorrect(centimeters)) {
        throw "Error! Invalid argument";
    }
    return centimeters / 17.78;
}

double LengthConverter::spansToCentimeters(double spans) {
    if (!isCorrect(spans)) {
        throw "Error! Invalid argument";
    }
    return spans * 17.78;
}

double LengthConverter::spansToVersts(double spans) {
    if (!isCorrect(spans)) {
        throw "Error! Invalid argument";
    }
    return spans / 6000;
}

double LengthConverter::verstsToSpans(double versts) {
    if (!isCorrect(versts)) {
        throw "Error! Invalid argument";
    }
    return versts * 6000;
}

bool LengthConverter::isCorrect(double value) {
    const double eps = 0.01;

    if ((value < 0) || (value < eps && value > -eps)) {
        return false;
    }
    return true;
}
