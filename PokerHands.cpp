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

int PokerHands::getRank(){
    stringstream hand(player);
    string rank1, rank2, rank3, rank4, rank5;
    int rankvalue1, rankvalue2, rankvalue3, rankvalue4, rankvalue5;

    while(!hand.eof()){
        getline(hand, rank);
        rank1 = player.substr(0, 1);
        rank2 = player.substr(3, 1);
        rank3 = player.substr(6, 1);
        rank4 = player.substr(9, 1);
        rank5 = player.substr(12, 1);
    }
    rankvalue1 = value(rank1.c_str());
    rankvalue2 = value(rank2.c_str());
    rankvalue3 = value(rank3.c_str());
    rankvalue4 = value(rank4.c_str());
    rankvalue5 = value(rank5.c_str());
    
    int rankIndex[15] = {rankvalue1, rankvalue2, rankvalue3, rankvalue4, rankvalue5};

    int rankCount[15] = {0};
    for(int i = 0; i < 15; i++){
        rankCount[rankIndex[i]]++;
    }
    printf("RankCount: ");
    for(int i = 2; i < 15; i++){
        if(rankCount[i]!=0){
        printf("%d:[%d] ", i, rankCount[i]);
        }
    }
    printf("\n");
    return *rankCount;
}

int PokerHands::getSuit(){
    stringstream hand(player);
    string suit1, suit2, suit3, suit4, suit5;
    int suitvalue1, suitvalue2, suitvalue3, suitvalue4, suitvalue5;
    int suitCount[19]={0};

    while(!hand.eof()){
        getline(hand, suit);
            suit1 = suit.substr(1, 1);
            suit2 = suit.substr(4, 1);
            suit3 = suit.substr(7, 1);
            suit4 = suit.substr(10, 1);
            suit5 = suit.substr(13, 1);
    }
    suitvalue1 = value(suit1);
    suitvalue2 = value(suit2);
    suitvalue3 = value(suit3);
    suitvalue4 = value(suit4);
    suitvalue5 = value(suit5);
    
    
    int suitIndex[19] = {suitvalue1, suitvalue2, suitvalue3, suitvalue4, suitvalue5};
    for(int i = 0; i < 19; i++){
        suitCount[suitIndex[i]]++;
    }
    printf("SuitCount: ");
    for(int i = 15; i < 19; i++){
        if(suitCount[i]!=0){
            printf("%d:[%d] ", i, suitCount[i]);
        }
    }
    printf("\n");
    return *suitCount;
}

int PokerHands::pairs(int *ranks){
    int pair2 = 0;
    int pair3 = 0;
    int pair4 = 0;
    int flush = 0;
    int pairs[5] = {0};
    for(int i = 2; i < 15; i++){
        if(ranks[i] == 2){
            pair2 = 1;
            pairs[0]=pair2;
            printf("pair2: %d", pair2);
        }
        else if(ranks[i] == 3){
            pair3 = 1;
            pairs[1]=pair3;
            printf("pair3: %d", pair3);
        }
        else if(ranks[i] == 4){
            pair4 = 1;
            pairs[3]=pair4;
            printf("pair4: %d", pair4);
        }
        else if(ranks[i] == 5){
            flush = 1;
            pairs[4]=flush;
            printf("flush: %d", flush);
        }
    }
    return *pairs;
}

int PokerHands::value(string card){
    int val = atoi(card.c_str());
    if(card == "T")val = 10;
    if(card == "J")val = 11;
    if(card == "Q")val = 12;
    if(card == "K")val = 13;
    if(card == "A")val = 14;
    if(card == "C")val = 15;
    if(card == "S")val = 16;
    if(card == "H")val = 17;
    if(card == "D")val = 18;
    
    return val;
}

std::ostream &operator << (std::ostream &output, const PokerHands &op){
    output << op.player;
    return output;
}//friend overload
