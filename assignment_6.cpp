// Copyright (c) 2019 Davin Rousseau
//
// Created by: Davin Rousseau
// Created on: November 2019
// This program uses user defined functions
// to calculate Surface area of a cube
// with named parameters

#include <iostream>
#include <cmath>

double SurfaceAreaCube(int lC) {
    // calculate surface area of cube

    // process
    double surfaceArea;

    surfaceArea = (pow(lC, 2) * 6);

    // output
    return surfaceArea;
}


main() {
    // This program checks if integer is positive
    // then calls function

    // input
    std::string input1;
    int lengthCube;
    int lC;
    double surfaceArea;
    std::cout << "Enter the length of the cube(cm): ";
    std::cin >> input1;
    std::cout << std::endl;

    // process
    while (true) {
        try {
            lengthCube = std::stoi(input1);
            if (lengthCube > 0) {
                // call function
                surfaceArea = SurfaceAreaCube(lC = lengthCube);
                std::cout << "The surface area of the cube is: " << surfaceArea
                          << "cm^2" << std::endl;
                break;
            } else {
                std::cout << "Invalid Input" << std::endl;
                std::cout << "Pleae try again: ";
                std::cin >> input1;
                continue;
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid Input" << std::endl;
            std::cout << "Pleae try again: ";
            std::cin >> input1;
            continue;
    }
    }
}
