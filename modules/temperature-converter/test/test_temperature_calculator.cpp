// Copyright 2018 Nifadyev Vadim

#include <gtest/gtest.h>

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

#include "include/temperature_calculator.h"

using ::testing::internal::RE;
using std::vector;
using std::string;

class TemperatureCalculatorTest : public ::testing::Test {
 protected:
    void Act(vector<string> args_) {
        vector<const char*> options;

        options.push_back("appname");
        for (size_t i = 0; i < args_.size(); ++i) {
            options.push_back(args_[i].c_str());
        }

        const char** argv = &options.front();
        int argc = static_cast<int>(args_.size()) + 1;

        output_ = app_(argc, argv);
    }

    void Assert(std::string expected) {
        EXPECT_TRUE(RE::PartialMatch(output_, RE(expected)));
    }

 private:
    TemperatureCalculator app_;
    string output_;
};

TEST_F(TemperatureCalculatorTest, Can_Print_Default_Help) {
    vector<string> args = {};

    Act(args);

    Assert("This is a temperature calculator application\\..*");
}

TEST_F(TemperatureCalculatorTest, Can_Print_Help_Without_Arguments) {
    vector<string> args = {};

    Act(args);

    Assert("This is a temperature calculator application\\..*");
}

TEST_F(TemperatureCalculatorTest, Is_Checking_Number_Of_Arguments) {
    vector<string> args = {"15", "C"};

    Act(args);

    Assert("ERROR: Should be 3 arguments\\..*");
}

TEST_F(TemperatureCalculatorTest, Can_Detect_Wrong_Temperature_Format) {
    vector<string> args = {"zero", "F", "C"};

    Act(args);

    Assert("Wrong number format!.*");
}

TEST_F(TemperatureCalculatorTest, Can_Detect_Wrong_Scale_Format) {
    vector<string> args = {"126", "A", "C"};

    Act(args);

    Assert("Wrong scale format!");
}

TEST_F(TemperatureCalculatorTest, Can_Convert_Celsius_To_Fahrenheit) {
    vector<string> args = {"30", "C", "F"};

    Act(args);

    Assert("Converted temperature = 86 Scale = F");
}

TEST_F(TemperatureCalculatorTest, Can_Convert_Fahrenheit_To_Celsius) {
    vector<string> args = {"140", "F", "C"};

    Act(args);

    Assert("Converted temperature = 60 Scale = C");
}

TEST_F(TemperatureCalculatorTest, Can_Convert_Kelvin_To_Fahrenheit) {
    vector<string> args = {"513.15", "K", "F"};

    Act(args);

    Assert("Converted temperature = 464 Scale = F");
}

TEST_F(TemperatureCalculatorTest, Can_Convert_Fahrenheit_To_Kelvin) {
    vector<string> args = {"41", "F", "K"};

    Act(args);

    Assert("Converted temperature = 278.15 Scale = K");
}

TEST_F(TemperatureCalculatorTest, Can_Convert_Celsius_To_Newton) {
    vector<string> args = {"159", "C", "N"};

    Act(args);

    Assert("Converted temperature = 52.47 Scale = N");
}
