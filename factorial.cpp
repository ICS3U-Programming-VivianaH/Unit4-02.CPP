// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program allows the user to enter a whole number.
// It then uses a do..while loop to calculate the factorial
// of that number.
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a number: ";
    std::string user_input;
    std::cin >> user_input;

    try {
        int user_num = std::stoi(user_input);

        if (user_num >= 0) {
            int product = 1;
            int counter = 0;
            do {
                counter += 1;
                product *= counter;
            } while (counter < user_num);

            std::cout << user_num << "! = " << product << std::endl;
        } else {
            std::cout << "Number must be a whole number!" << std::endl;
        }
    } catch (...) {
        std::cout << "user_input is not an integer." << std::endl;
    }
}
