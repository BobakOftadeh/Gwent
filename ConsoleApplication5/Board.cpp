#include "Board.h"

void Board::setPlayerone(int a) {

    playerOneStr += a;
}

void Board::setPlayertwo(int a) {
    playerTwoStr += a;
}

void Board::display() {
    std::cout << "Player Ones Power is: " << playerOneStr << std::endl;

    std::cout << "Player Twos Power is: " << playerTwoStr << std::endl <<std::endl;
}

int Board::getPowerOne() {
    return playerOneStr;
}
int Board::getPowerTwo() {
    return playerTwoStr;
}

int Board::getRoundsWonOne()
{
    return roundsWonOne;
}

int Board::getRoundsWonTwo()
{
    return roundsWonTwo;
}
void Board::setRoundsWonOne(int a) {
    roundsWonOne += a;
}

void Board::setRoundsWonTwo(int a) {
    roundsWonTwo += a;
}

void Board::reset() {
    playerOneStr = 0;
    playerTwoStr = 0;
}
void Board::flushKeyboard()
{
    while (getchar() != '\n');
}

void Board::pause()
{
    printf("Press <ENTER> to continue...");
    std::cin.ignore();
    flushKeyboard();
}
