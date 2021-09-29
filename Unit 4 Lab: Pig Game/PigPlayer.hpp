//
//  PigPlayer.hpp
//  Unit 4 Lab: Pig Game
//
//  Created by Coleton Watt on 9/28/21.
//

#ifndef PigPlayer_hpp
#define PigPlayer_hpp

#include <stdio.h>
#include <iostream>

using namespace std;


class PigPlayer{
private:
    
    int dieTotal;
    int turnTotal;
    int gameTotal;
    
public:
    PigPlayer();
    
    void roll();
    void stop();
    void resetTurnTotal();
    
    int getDieValue();
    int getTurnTotal();
    int getTotal();
    

};

#endif /* PigPlayer_hpp */
