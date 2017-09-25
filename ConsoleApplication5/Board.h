#pragma once
#include <iostream>

class Board{
    
    int playerOneStr = 0;
    int playerTwoStr = 0;
    int roundsWonOne = 0;
    int roundsWonTwo = 0;

public:

    void setPlayerone(int a);
    void setPlayertwo(int a);
    void setRoundsWonOne(int a);
    void setRoundsWonTwo(int a);
    void reset();
    int getPowerOne();
    int getPowerTwo();
    int getRoundsWonOne();
    int getRoundsWonTwo();
    void flushKeyboard();
    void pause();
    void display();
};