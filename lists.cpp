// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date : Dec 15, 2022
// This program calculates the user's average mark

#include <iostream>
#include <list>
#include <string>

float averageMark(std::list<float> marks) {
    // Initializes sum of marks to 0
    float sum = 0;

    // Gets the sum of all marks
    for (int counter : marks) {
        sum += counter;
    }

    // Returns the average of all marks
    return sum / marks.size();
}

int main() {
    // Declaring list and mark variable

    std::string userMarkStr;
    std::list<float> userMarks;
    float userMark;

    // Tells the user to enter -1 if they are done entering marks
    std::cout << "Enter '-1' if you are finished entering marks.\n";

    do {
        std::cout << "Enter a mark: ";
        std::cin >> userMarkStr;

        // Checks if the user entered a numeric value
        try {
            userMark = std::stof(userMarkStr);
        } catch (...) {
            std::cout << "You must enter a numeric value.\n";
        }

        // Adds the mark to the back of the list
        userMarks.push_back(userMark);
    } while (userMark != -1);

    // Removes -1 from the list
    userMarks.remove(-1);

    // Prints the average of the marks
    std::cout << "The average of the marks is: ";
    std::cout << averageMark(userMarks) << "%.\n";
}
