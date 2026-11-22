// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Nov 12, 2026
// This program asks the user
// a program generating RGB using
// multiple loops
#include <iostream>

int main() {
    // This function uses 3 nested loops
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    // Using multiple nested loop to get the RGB colours
    for (counter1 = 0; counter1 < 3; counter1++) {
        for (counter2 = 0; counter2 < 3; counter2++) {
            for (counter3 = 0; counter3 < 3; counter3++) {
                std::cout << "\033[38;2;"
                          << counter1 << ";"
                          << counter2 << ";"
                          << counter3 << "m"
                          << "RGB(" << counter1 << ","
                          << counter2 << ","
                          << counter3 << ")"
                          << "\033[0m" << std::endl;
            }
        }
    }
