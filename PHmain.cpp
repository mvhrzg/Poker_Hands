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
    string P1suit[5]; //part of pokerhand
    string P2suit[5]; //part of pokerhand
    string P1rank[5]; //part of pokerhand
    string P2rank[5]; //part of pokerhand
    int Player1wins = 0;
//	Player1= pokerhand(P1hand)
//	Player3 = pokerhand(P2hand)
//	If(P1.value > P2.value){ P1wins++}  needs method that computes hand value [Player1.value() in C++ is P1->valueMethodName()]  this is because when you make a new PokerHand, C++ returns a pointer.
//	Print P1wins
    
    while(!poker.eof()){
        getline(poker, inputLine);
        P1Hand = inputLine.substr(0, 14);
        P2Hand = inputLine.substr(15);
        PokerHands P1 = PokerHands(P1Hand);
        PokerHands P2 = PokerHands(P2Hand);
  
        cout << "P1: " << P1 << endl;
        //printf("%s ", P1.getRank().c_str());
        P1.getRank();
        //P1.pairs();
        cout << endl;
        cout << "P2: " << P2 << endl;
        cout << endl;
        
        
        //get rank & suit
//        for(int i =0; i < 5; i++){
//            P1rank[0] = P1Hand[0];
//            P1rank[1] = P1Hand[3];
//            P1rank[2] = P1Hand[6];
//            P1rank[3] = P1Hand[9];
//            P1rank[4] = P1Hand[12];
//            P1suit[0] = P1Hand[1];
//            P1suit[1] = P1Hand[4];
//            P1suit[2] = P1Hand[7];
//            P1suit[3] = P1Hand[10];
//            P1suit[4] = P1Hand[13];
//            printf("RANK:%s ", P1rank[i].c_str());
//            printf("SUIT:%s ", P1suit[i].c_str());
//        }
//        printf("\nP2: %s\n", P2Hand.c_str());
//        for(int i =0; i < 5; i++){
//            P2rank[0] = P2Hand[0];
//            P2rank[1] = P2Hand[3];
//            P2rank[2] = P2Hand[6];
//            P2rank[3] = P2Hand[9];
//            P2rank[4] = P2Hand[12];
//            P2suit[0] = P2Hand[1];
//            P2suit[1] = P2Hand[4];
//            P2suit[2] = P2Hand[7];
//            P2suit[3] = P2Hand[10];
//            P2suit[4] = P2Hand[13];
//            printf("RANK: %s ", P2rank[i].c_str());
//            printf("SUIT: %s ", P2suit[i].c_str());
//        }

        
        
        
        
        
        
        
        
        
        
        
        
//        for(int i = 0; i < inputLine.length(); i++){
//            value[i] = (int)inputLine.at(i)-(int)'0';//cards(inputLine.at(i));
//        }
        //put ranks and suits into arrays
        //for(int i = 0; i < P1Hand.size(); i++){
//            printf("%s ", P1Hand[0]);
//            printf("%s ", P1Hand[3]);
//            printf("%s ", P1Hand[6]);
//            printf("%s ", P1Hand[9]);
//            printf("%s ", P1Hand[12]);
//            suitP2[i] = P1Hand[i+1];
//            printf("P1S: %s ", suitP1[i].c_str());
            //i = i+2;
        //}
    }
    
//            printf("%s ", P1Hand[0]);
//            printf("%s ", P1Hand[3]);
//            printf("%s ", P1Hand[6]);
//            printf("%s ", P1Hand[9]);
//            printf("%s ", P1Hand[12]);

    return 0;
}

