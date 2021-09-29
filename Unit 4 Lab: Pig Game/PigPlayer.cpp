//
//  PigPlayer.cpp
//  Unit 4 Lab: Pig Game
//
//  Created by Coleton Watt on 9/28/21.
//

#include "PigPlayer.hpp"

#include <stdio.h>
#include <stdlib.h>




PigPlayer::PigPlayer(){
    dieTotal = 0;
    turnTotal = 0;
    gameTotal = 0;
}
int PigPlayer::getDieValue(){
    return dieTotal;
}


int PigPlayer::getTurnTotal(){
    return turnTotal;
}

int PigPlayer::getTotal(){
    //cout<<gameTotal;
    return gameTotal;
}

void PigPlayer::roll(){
    this ->dieTotal = rand() % 6 + 1;
    if(dieTotal!= 1){
        turnTotal += dieTotal;
        //cout << turnTotal;
    }else if(dieTotal == 1){
        //cout << "drugzzzz";
        
        
    }
}
    
void PigPlayer::stop(){
    gameTotal += turnTotal;
}

void PigPlayer::resetTurnTotal(){
    //cout << "drubssss\n\n";
    turnTotal = 0;
    
}
