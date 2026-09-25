#include <iostream>
#include "Horse.h"

Horse::Horse(){
    position = 0;
    id = 0;
    trackLength = 15;
} // end Horse constructor

void Horse::init(int id, int trackLength){
    Horse::id = id;
    Horse::trackLength = trackLength;
    Horse::position = 0;
} // end init

void Horse::advance(){
    int coin = rand() % 2;
    position += coin;
} // end advance

void Horse::printLane(){
    std::cout << "|";
    for(int pos = 0; pos < trackLength; pos++){
        if(pos == position){
            std::cout << id;
        } else{
            std::cout << '.';
        } // end if/else
    } // end for
    std::cout << "|" << '\n';
} // end printLane

bool Horse::isWinner(){
    bool isWin = false;
    if(position >= (trackLength - 1)){
        std::cout << "  a winner is " << id << "! \n";
        isWin = true;
    } // end if
    return isWin;
} // end isWinner