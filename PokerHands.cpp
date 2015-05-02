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
    stringstream hand(player);
    string rank1, rank2, rank3, rank4, rank5;
    while(!hand.eof()){
        getline(hand, rank);
            rank1 = rank.substr(0, 1);
            rank2 = rank.substr(3, 1);
            rank3 = rank.substr(6, 1);
            rank4 = rank.substr(9, 1);
            rank5 = rank.substr(12, 1);
    }
    
    string allRanks[5] = {rank1, rank2, rank3, rank4, rank5};

//    for(int i = 0; i < 5; i++){
//        printf("rank%d:[%s] ",i+1 , allRanks[i].c_str());
//    }

    return *allRanks;
}

string PokerHands::getSuit(){
    stringstream hand(player);
    string suit1, suit2, suit3, suit4, suit5;
    while(!hand.eof()){
        getline(hand, suit);
            suit1 = suit.substr(1, 1);
            suit2 = suit.substr(4, 1);
            suit3 = suit.substr(7, 1);
            suit4 = suit.substr(10, 1);
            suit5 = suit.substr(13, 1);
    }
    
    string allSuits[5] = {suit1, suit2, suit3, suit4, suit5};

//    for(int i = 0; i < 5; i++){
//        printf("suit%d:[%s] ",i+1 , allSuits[i].c_str());
//    }

    return *allSuits;
}

bool PokerHands::flush(){
    
    return true
}

int PokerHands::value(){
    
   
}

std::ostream &operator << (std::ostream &output, const PokerHands &op){
    output << op.player;
    return output;
}//friend overload
