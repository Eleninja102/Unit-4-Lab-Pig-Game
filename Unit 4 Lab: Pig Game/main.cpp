//
//  main.cpp
//  Unit 4 Lab: Pig Game
//
//  Created by Coleton Watt on 9/28/21.
//

#include <iostream>

#include <iostream>
#include <iomanip>
#include "PigPlayer.hpp"
#include <time.h>

using namespace std;

int main() {
    srand ((unsigned int)time(NULL));
    
    PigPlayer player;
    PigPlayer computer;
    char keepGoing;
    cout << "PIG PLAYER!\n\n";
    
    do{
        do{
            cout << "Turn Total: " << player.getTurnTotal() << endl;
            cout << "Game Total for Player: " << left << setw(4) << player.getTotal()<< "Computer Game Total: " << computer.getTotal() << endl;
        
            cout << "(R)oll or (S)top: ";
            cin >> keepGoing;
            if (keepGoing == 'R'){
                player.roll();
                cout << "You rolled a " << player.getDieValue() << endl;
                if(player.getDieValue() == 1){
                    cout << endl;
                    break;
                }
                
            } else if(keepGoing == 'S'){
                player.stop();
                
            }
            cout << endl;
        }while(keepGoing != 'S');
        if(player.getTotal() >= 100){
            //cout << "WHAT";
            break;
        }
        player.resetTurnTotal();
        //computer turn
        keepGoing = 'R';
        int somethingElse = 2;
        do{
            int something =(rand() % 100);
            
            //cout << something;
            if(something <= somethingElse){
                //cout << "STOPPPPPED\n";
                keepGoing = 'S';
                computer.stop();
            }else{
                keepGoing = 'R';
                computer.roll();
                int xyx = computer.getDieValue();
                cout << "Computer Rolled: " << xyx << endl;
                if(xyx == 1){
                    
                    break;
                }
            }
            somethingElse*=3;

            
           
        }while(keepGoing != 'S');
        computer.resetTurnTotal();

        
        
        cout << endl;
    }while(player.getTotal() < 100 && computer.getTotal() < 100);
    
    if(computer.getTotal() >= 100){
        cout << "COMPUTER WINS!!!";
    } else if(player.getTotal() >= 100){
        cout << "YOU WIN!!!!!!";
    } else{
        cout << "WHAT????";
    }
    return 0;
}
