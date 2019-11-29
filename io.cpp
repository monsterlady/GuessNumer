#include <random>
#include <random>
#include <ctime>
#include <iostream>

//
// Created by 233 on 2019/11/22.
//
// Initialize our mersenne twister with a random seed based on the clock
std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
// Create a reusable random number generator
std::uniform_int_distribution<> generator(1, 100);

int randomNumber()
{
    return generator(mersenne);
}

int readNumber()
{
    int x;
    std::cin >> x;
    return x;
}

bool writeResponse(int set,int input){
    return set <= input;
}

bool isContinue(){

    std::string s;
    std::cin >> s;
    if(s == "y" || s == "n"){
        return s == "y";
    } else {
        std::cout << "\nWould you like to play again (y/n)? " << std::endl;
        isContinue();
    }
}
