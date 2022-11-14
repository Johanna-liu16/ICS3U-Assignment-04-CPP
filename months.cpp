// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringYear;
    std::string stringMonth;
    int intYear;
    int intMonth;

    // input
    std::cout << "This program identifies the days in a month." << std::endl;
    std::cout << "Enter a month as a number: ";
    std::cin >> stringMonth;
    std::cout << "Enter a year: ";
    std::cin >> stringYear;

    // process and output
    try {
        intYear = std::stoi(stringYear);
        intMonth = std::stoi(stringMonth);

        if (intYear < 0) {
            std::cout << "Invalid year";
        } else {
            if (intYear % 4 == 0 || intYear % 400 == 0) {
                if (intYear % 100 == 0 && intYear % 400 != 0) {
                    if (intMonth< 0 && intMonth >= 13) {
                        std::cout << "Invalid Month";
                    } else {
                        if (intMonth == 2) {
                            std::cout << "This month has 28 days.";
                        } else if (intMonth % 2 == 0) {
                            std::cout << "This month has 30 days.";
                        } else {
                            std::cout << "This month has 31 days.";
                        }
                    }
                } else {
                    std::cout << "This is a leap year.";
                    if (intMonth == 2) {
                        std::cout << "This month has 29 days.";
                    } else if (intMonth % 2 == 0) {
                        std::cout << "This month has 30 days.";
                    } else {
                        std::cout << "This month has 31 days.";
                    }
                }
            } else {
                if (intMonth == 2) {
                    std::cout << "This month has 28 days.";
                } else if (intMonth % 2 == 0) {
                    std::cout << "This month has 30 days.";
                } else {
                    std::cout << "This month has 31 days.";
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
