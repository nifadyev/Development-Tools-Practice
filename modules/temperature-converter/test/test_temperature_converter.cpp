// Copyright 2018 Nifadyev Vadim

#include <gtest/gtest.h>

#include "include/temperature_converter.h"

TEST(Temperature_Converter_Test, Can_Create_Object) {
    // Arrang & Act & Assert
    ASSERT_NO_THROW(TemperatureConverter temp(-7.0, 'K'));
}

TEST(Temperature_Converter_Test, Cannot_Create_Object_With_Wrong_Scale) {
    // Arrang & Act & Assert
    ASSERT_ANY_THROW(TemperatureConverter temp(-7, 'p'));
}

TEST(Temperature_Converter_Test, Can_Equalize) {
    // Arrange
    TemperatureConverter temp1(10, 'K');
    TemperatureConverter temp2(2, 'C');

    // Act & Assert
    ASSERT_NO_THROW(temp1 = temp2);
}

TEST(Temperature_Converter_Test, Can_Convert) {
    // Arrange
    TemperatureConverter temp(10, 'F');

    // Act & Assert
    ASSERT_NO_THROW(temp.convert(temp, 'N'));
}

TEST(Temperature_Converter_Test, Cannot_Convert_Kelvin_To_Wrong_Scale) {
    // Arrange
    TemperatureConverter temp(10, 'K');
    TemperatureConverter result(0, 'C');

    // Act & Assert
    ASSERT_ANY_THROW(result = temp.convert(temp, '3'));
}

TEST(Temperature_Converter_Test, Cannot_Convert_Celsius_To_Wrong_Scale) {
    // Arrange
    TemperatureConverter temp(10, 'C');
    TemperatureConverter result(0, 'C');

    // Act & Assert
    ASSERT_ANY_THROW(result = temp.convert(temp, 'y'));
}

TEST(Temperature_Converter_Test, Cannot_Convert_Fahrenheit_To_Wrong_Scale) {
    // Arrange
    TemperatureConverter temp(10, 'F');
    TemperatureConverter result(0, 'C');

    // Act & Assert
    ASSERT_ANY_THROW(result = temp.convert(temp, 'n'));
}

TEST(Temperature_Converter_Test, Cannot_Convert_Newton_To_Wrong_Scale) {
    // Arrange
    TemperatureConverter temp(10, 'N');
    TemperatureConverter result(0, 'C');

    // Act & Assert
    ASSERT_ANY_THROW(result = temp.convert(temp, 'f'));
}

TEST(Temperature_Converter_Test, Can_Convert_Kelvin_To_Celsius) {
    // Arrange
    TemperatureConverter temp(10, 'K');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'C');

    // Assert
    EXPECT_EQ(-263.15, result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Kelvin_To_Fahrenheit) {
    // Arrange
    TemperatureConverter temp(273, 'K');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'F');

    // Assert
    EXPECT_EQ((int)31.73, (int)result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Kelvin_To_Newton) {
    // Arrange
    TemperatureConverter temp(400, 'K');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'N');

    // Assert
    EXPECT_EQ((int)41.8605, (int)result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Celsius_To_Kelvin) {
    // Arrange
    double celsius = -273.15;
    TemperatureConverter temp(-273.15, 'C');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'K');

    // Assert
    EXPECT_EQ(0, result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Celsius_To_Fahrenheit) {
    // Arrange
    TemperatureConverter temp(-40, 'C');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'F');

    // Assert
    EXPECT_EQ(-40, result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Celsius_To_Newton) {
    // Arrange
    TemperatureConverter temp(3, 'C');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'N');

    // Assert
    EXPECT_EQ(0.99, result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Fahrenheit_To_Celsius) {
    // Arrange
    TemperatureConverter temp(5, 'F');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'C');

    // Assert
    EXPECT_EQ(-15, result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Fahrenheit_To_Kelvin) {
    // Arrange
    TemperatureConverter temp(-211, 'F');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'K');

    // Assert
    EXPECT_EQ((int)138.15, (int)result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Fahrenheit_To_Newton) {
    // Arrange
    TemperatureConverter temp(2, 'F');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'N');

    // Assert
    EXPECT_EQ((int)-5.49, (int)result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Newton_To_Celsius) {
    // Arrange
    TemperatureConverter temp(3, 'N');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'C');

    // Assert
    EXPECT_EQ(9.090909, result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Newton_To_Kelvin) {
    // Arrange
    double newton = -100;
    TemperatureConverter temp(-100, 'N');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'K');

    // Assert
    EXPECT_EQ((int)-29.8803, (int)result.getCurrentTemperature());
}

TEST(Temperature_Converter_Test, Can_Convert_Newton_To_Fahrenheit) {
    // Arrange
    TemperatureConverter temp(2, 'N');
    TemperatureConverter result(0, 'C');

    // Act
    result = temp.convert(temp, 'F');

    // Assert
    EXPECT_EQ(42.90909, result.getCurrentTemperature());
}
