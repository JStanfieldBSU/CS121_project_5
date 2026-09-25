#include <iostream>
#include <ctime>
#include "Race.h"
#include "Horse.h"

Race::Race(){
    for(int racer = 0; racer < NUM_HORSES; racer++){
        horses[racer].init(racer, TRACK_LENGTH);
    } // end for
} // end Race Constructor

void Race::start(){
    srand(time(NULL));
    bool keepGoing = true;

    std::cout << "Welcome to Horser Racer! \n";

    while(keepGoing){
        std::cout << "Please press ENTER to continue! \n";
        std::cin.get();
        system("clear"); // Clear the Screen
        std::cout << " BALLSTATE DERBY\n";
        for(int racer = 0; racer < NUM_HORSES; racer++){
            horses[racer].advance();
            horses[racer].printLane();
            if(horses[racer].isWinner()){
                keepGoing = false;
            } // end if
        } // end for
    } // end while
} // end start
