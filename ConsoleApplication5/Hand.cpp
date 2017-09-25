#include <iostream>
#include "Hand.h"



Hand::Hand() {
    handCount = 10;

    for (int i = 0; i < handCount; i++)
    {
        handCards[i] = rand() % 10 + 1;
    }
}

int Hand::ShowhandCount() {
    return handCount;
}

int Hand::showCard(int a) {

    int card = handCards[a];

    return card;

}

void Hand::display() {
    std::cout.width(11);
    std::cout << "Card Power";
    for (int i = 0; i < handCount; i++)
    {
        /*std::cout << handCards[i];
            if (i+1 < handCount)
            {

                std::cout << ",";

            }
            else
            {
                std::cout << std::endl;
            }*/

        std::cout << "|";
        std::cout.setf(std::ios::right);
        std::cout.width(2);
        std::cout << handCards[i] << "|";
    }
    std::cout << std::endl;
}

int Hand::playCard(int card) {
    int power = handCards[card];



    return power;
}

void Hand::RemoveCard(int card) {
    bool over = false;
    for (int i = 0; i < handCount; i++) {

        if (i == card || over)
        {
            handCards[i] = handCards[i + 1];
            over = true;
        }
        else
        {
            handCards[i] = handCards[i];
        }

    }
    --handCount;
}

void Hand::refillHand() {
    handCount = 10;

    for (int i = 0; i < handCount; i++)
    {
        handCards[i] = rand() % 10 + 1;
    }
}



