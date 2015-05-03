/* 
 * File:   PHmain.cpp
 * Author: MHerzog
 *
 * Created on May 2, 2015, 11:34 AM
 */

#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>

#include "PokerHands.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream poker("p054_poker.txt");
    string inputLine;
    string P1Hand;
    string P2Hand;
    int Player1wins = 0;
    
    while(!poker.eof()){
        getline(poker, inputLine);
        P1Hand = inputLine.substr(0, 14);
        P2Hand = inputLine.substr(15);
        PokerHands P1 = PokerHands(P1Hand);
        PokerHands P2 = PokerHands(P2Hand);
  
        cout << "P1: " << P1 << endl;
        cout << "P2: " << P2 << endl;
        
        int P1v = P1.value(P1.getCard());
        int P2v = P2.value(P2.getCard());
        if(P1v > P2v){Player1wins++;}
        
    }        
    printf("P1 wins %d times.", Player1wins);
    return 0;
}

