// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 25, 2021
// This program displays the square of all the
// numbers from 0 up to the users number

#include <iostream>
#include <cmath>

// variables
int userNum;
int counter;

int main() {
    // make the string version of the var
    std::string userNumStr;

    // get the number from the user
    std::cout << "What is your number (must be a whole number): ";
    std::cin >> userNumStr;

    try {
        // try to turn it into a integer
        userNum = std::stoi(userNumStr);

        if (userNum < 0) {
            std::cout << "Number must be positive";

        } else {
            for (counter = 0; counter < userNum + 1; counter++) {
                std::cout << counter << "² = " << pow(counter, 2) << std::endl;
            }
        }

    // if could not turn into integer
    } catch (std::invalid_argument) {
        std::cout << "This is not a valid number";
    }
}
