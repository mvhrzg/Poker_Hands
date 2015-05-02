/* 
 * File:   PokerHands.cpp
 * Author: MHerzog
 * 
 * Created on May 2, 2015, 11:35 AM
 */

#include <string>
#include <sstream>
#include <fstream>
//#include <iomanip>
#include <cstdlib>
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
    for(int i = 0; i < 5; i++){
        return allCards[i];
    }
}

string PokerHands::getRank(){
    stringstream hand(player);
    string rank1, rank2, rank3, rank4, rank5;
    int rankvalue1, rankvalue2, rankvalue3, rankvalue4, rankvalue5;
    while(!hand.eof()){
        getline(hand, rank);
            rank1 = rank.substr(0, 1);
            rankvalue1 = value(rank1);
            rank2 = rank.substr(3, 1);
            rankvalue2 = value(rank2);
            rank3 = rank.substr(6, 1);
            rankvalue3 = value(rank3);
            rank4 = rank.substr(9, 1);
            rankvalue4 = value(rank4);
            rank5 = rank.substr(12, 1);
            rankvalue5 = value(rank5);
    }
    
    //string allRanks[5] = {rank1, rank2, rank3, rank4, rank5};
    int rankIndex[15];
    //for(int i = 0; i < 15; i++){
        rankIndex[rankvalue1]++;
        rankIndex[rankvalue2]++;
        rankIndex[rankvalue3]++;
        rankIndex[rankvalue4]++;
        rankIndex[rankvalue5]++;
    //}
    for(int i = 2; i < 15; i++){
        printf("%d ", rankIndex[i]);
    }
//    for(int i = 0; i < 5; i++){
//        printf("rank%d:[%s] ",i+1 , allRanks[i].c_str());
//    }

    return rank;
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

int PokerHands::pairs(){
    int pairs = 0;
    string playerHand;
    string allPairs[5];
    string allIndices[5];
    stringstream hand(player);
    int j = 0;
    while(!hand.eof()){
        getline(hand, playerHand);
        for(int i = 0; i < PokerHands::getRank().size(); i++){
        }
            
    }
//    for(int i = 0; i < 5; i++){
//        printf("%s ", allPairs[i].c_str());
//    }
    return 0;//pairs;
}

bool PokerHands::flush(){
    bool isFlush = false;
    for(int i = 0; i < 5; i++){
        if(getSuit()[0] == getSuit()[1] == getSuit()[2] == getSuit()[3] == getSuit()[4]){
            printf("true");
            isFlush = true;
        }
        else{
            printf("false");
            isFlush = false;
        }
    }
    return isFlush;
}

int PokerHands::value(string card){
    int val = atoi(card.c_str());
    if(card.compare((const char*)('T'))==0) val = 10;
    if(card.compare((const char*)('J'))==0) val = 11;
    if(card.compare((const char*)('Q'))==0) val = 12;
    if(card.compare((const char*)('K'))==0) val = 13;
    
    return val;
   
}

std::ostream &operator << (std::ostream &output, const PokerHands &op){
    output << op.player;
    return output;
}//friend overload
