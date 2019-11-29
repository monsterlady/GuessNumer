#include <iostream>
#include "io.h"


int main() {
    std::cout << "Let's play a game. I'm thinking of a number.\n"
                 "You have 7 tries to guess what it is." << std::endl;
    int round = 0;
    int setNum = randomNumber();
    bool isCorrect = false;
    while(round < 7 && !isCorrect){
        int x;
        round++;
        std::cout << "Guess #"<< round << ": " << std::endl;
        x = readNumber();
        if(x == setNum){
            isCorrect = true;
            bool b;
            std::cout << "Correct! You win!\n" <<
                         "Would you like to play again (y/n)? " << std::endl;
            b = isContinue();
            if (b){
                main();
            } else {
                std::cout << "Thanks for playing" << std::endl;
                return 0;
            }
        } else {
            if(writeResponse(setNum,x)){
                std::cout << "Your guess is too high!" << std::endl;
            } else {
                std::cout << "Your guess is too low!" << std::endl;
            }
        }
    }
    std::cout << "Sorry, you lose. The correct number was " << setNum <<
                 "\nWould you like to play again (y/n)? " << std::endl;
    bool b;
    b = isContinue();
    if (b){
        main();
    } else {
        std::cout << "Thanks for playing" << std::endl;
    }

    return 0;
}




