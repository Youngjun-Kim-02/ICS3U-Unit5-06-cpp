// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses user defined functions

#include <iostream>
#include <cmath>

int toRound(int decimals, int digits) {
    
    decimals = float(decimals);
    decimals = decimals * 10**digits;
    decimals = decimals + 0.5;
    decimals = int(decimals);
    decimals = decimals / 10**digits;
}


int main() {
    // this function rounds a number by the user to the digit the user wants

    int decimal;
    int userDecimal;
    int digit;
	
    // input
    std::cout << "Enter the number you want to round: ";
    std::cin >> userDecimal;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> digit;
	
    toRound(userDecimal, digit);
    std::cout << "The rounded number is " << decimal << std::endl;
}
