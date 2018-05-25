// Copyright 2018 Nifadyev Vadim

#include "include/temperature_converter.h"

TemperatureConverter::TemperatureConverter(double current_temperature_,
    char current_scale_) {
    current_temperature = current_temperature_;
    if (current_scale_ == 'C' || current_scale_ == 'K' ||
        current_scale_ == 'F' || current_scale_ == 'N') {
            current_scale = current_scale_;
        } else {
            throw("Incorrect temperature scale");
        }
}

TemperatureConverter & TemperatureConverter::operator=
(const TemperatureConverter &temp) {
    if (current_scale != temp.current_scale ||
    current_temperature != temp.current_temperature) {
        current_scale = temp.current_scale;
        current_temperature = temp.current_temperature;
    }

    return *this;
}

double TemperatureConverter::getCurrentTemperature() {
    return this->current_temperature;
}

TemperatureConverter TemperatureConverter::convert
(TemperatureConverter temperature, char new_scale) {
    if (temperature.current_scale == 'K') {
        switch (new_scale) {
            case 'C':
                temperature.current_temperature -= 273.15;
                break;
            case 'F':
                temperature.current_temperature = (9.0 / 5) *
                    (temperature.current_temperature - 273.15) + 32;
                break;
            case 'N':
                temperature.current_temperature =
                    (temperature.current_temperature - 273.15) * 0.33;
                break;
            default:
                throw("Incorrect new temperature scale");
            break;
        }

        temperature.current_scale = new_scale;
        return temperature;
    } else if (temperature.current_scale == 'C') {
        switch (new_scale) {
        case 'K':
            temperature.current_temperature += 273.15;
            break;
        case 'F':
            temperature.current_temperature =
                temperature.current_temperature * (9.0 / 5) + 32;
            break;
        case 'N':
            temperature.current_temperature =
                temperature.current_temperature * 0.33;
            break;
        default:
            throw("Incorrect new temperature scale");
            break;
        }

        temperature.current_scale = new_scale;
        return temperature;
       } else if (temperature.current_scale == 'F') {
        switch (new_scale) {
        case 'K':
            temperature.current_temperature = (5.0 / 9) *
                (temperature.current_temperature - 32) + 273.15;
            break;
        case 'C':
            temperature.current_temperature = (5.0 / 9) *
                (temperature.current_temperature - 32);
            break;
        case 'N':
            temperature.current_temperature =
                (temperature.current_temperature - 32) * 0.183333;
            break;
        default:
            throw("Incorrect new temperature scale");
            break;
        }

        temperature.current_scale = new_scale;
        return temperature;
    } else {
        switch (new_scale) {
        case 'K':
            temperature.current_temperature =
                temperature.current_temperature * 3.030303 + 273.15;
            break;
        case 'C':
            temperature.current_temperature *= 3.030303;
            break;
        case 'F':
            temperature.current_temperature =
                temperature.current_temperature * 5.454545 + 32;
            break;
        default:
            throw("Incorrect new temperature scale");
            break;
        }

        temperature.current_scale = new_scale;
        return temperature;
    }
}
