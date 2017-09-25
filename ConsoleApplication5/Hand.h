#pragma once

#include <iostream>


class Hand
{
    int handCount;
    int handCards[10];
    
    
public:

    Hand();
    
    int showCard(int a);
    void display();
    int playCard(int card);
    void RemoveCard(int card);
    int ShowhandCount();
    void refillHand();
    void printEven(int a);
    
};