/* 
 * File:   PokerHands.cpp
 * Author: MHerzog
 * 
 * Created on May 2, 2015, 11:35 AM
 */

#include <string>
#include <sstream>
#include <fstream>
#include "PokerHands.h"
using namespace std;

PokerHands::PokerHands(string player) {
    this->player = player;
    //player size = 14
}

string PokerHands::getCard(){
    stringstream hand(player);
    string card1, card2, card3, card4, card5;
    while(!hand.eof()){
        getline(hand, card);
        for(int i = 0; i < card.size(); i++){
            card1 = card.substr(0, card.find(' '));
            card2 = card.substr(3, card.find(' '));
            card3 = card.substr(6, card.find(' '));
            card4 = card.substr(9, card.find(' '));
            card5 = card.substr(12, card.find(' '));
        }
    }
    
    string allCards[5] = {card1, card2, card3, card4, card5};

//    for(int i = 0; i < 5; i++){
//        printf("card%d:[%s] ",i+1 , allCards[i].c_str());
//    }

    return *allCards;
}

string PokerHands::getRank(){
    return rank;
}

string PokerHands::getSuit(){
    return suit;
}

int PokerHands::value(){
    
}

std::ostream &operator << (std::ostream &output, const PokerHands &op){
    output << op.player;
    return output;
}//friend overload
