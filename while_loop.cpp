// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program is for while loop

#include <iostream>

int main() {
    // this fuction is for while loop
    int loop_number = 0;
    int basic_number = 0;
    std::string positive_number;
    int positive_number_int;

    // input
    std::cout << "Enter a positive_number: ";
    std::cin >> positive_number;

    // process & output
    try {
        positive_number_int = std::stoi(positive_number);
        std::cout << "It is a integer\n";
        if (positive_number_int > 0) {
            while (basic_number <= positive_number_int) {
            loop_number = loop_number + basic_number;
            basic_number = basic_number + 1;
            }std::cout << "∑i = " << loop_number << std::endl;
        } else {
            std::cout << "It is not a positive number";
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not a integer";
    }
}
