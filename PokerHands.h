/* 
 * File:   PokerHands.h
 * Author: MHerzog
 *
 * Created on May 2, 2015, 11:35 AM
 */

#ifndef POKERHANDS_H
#define	POKERHANDS_H

class PokerHands {
public:
    PokerHands(std::string player); //takes a substring of every line of poker.txt
    void setCard(PokerHands hand);
    void setSuit(PokerHands hand);
    void setRank(PokerHands hand);
    std::string getCard();    //takes the pokerHands object and substrings the playerhand for ever suit+rank
    std::string getSuit(); //takes a card and substring for every suit
    std::string getRank(); //takes a card and substring for every rank
    int value();
    friend std::ostream &operator << (std::ostream &output, const PokerHands &op);
    
private:
    std::string player;
    std::string card;
    std::string rank;
    std::string suit;
};

#endif	/* POKERHANDS_H */

