#include "Board.h"
#include "Hand.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    Hand one;
    Hand two;
    Board main;
    int choice = 0;
    int choice2 = 0;
    int cardNum = 1;
    int round = 1;
    bool onePass = false;
    bool twoPass = false;

    while (round <= 3)
    {

        cout << "Round " << round << '!' << endl << endl;
        cout << "Here is your hand Player one!" << endl << endl;
        while (twoPass != true || onePass != true)
        {

            if (onePass != true)
            {
                if (one.ShowhandCount() != 0)
                {

                    cout.setf(ios::left);
                    cout.width(11);
                    cout << "Card Number";
                    for (int i = 1; i <= one.ShowhandCount(); i++)
                    {
                        cout << "|";
                        std::cout.width(2);
                        cout << i << "|";

                    }
                    cout << endl;

                    one.display();

                    cout << endl;
                    cout << "Will you play a card or if you want to pass type '-1'?";
                    cin >> choice;
                    cout << endl;
                }
                else {
                    choice = -1;
                }
                system("CLS");
                if (choice == -1)
                {
                    onePass = true;
                }
                else
                {

                    choice = choice - 1;
                    cout << "You played a " << one.playCard(choice) << endl << endl;
                    main.setPlayerone(one.playCard(choice));
                    one.RemoveCard(choice);

                }

            }
            if (main.getPowerOne() >= main.getPowerTwo() && two.ShowhandCount() != 0 && (main.getPowerOne() - main.getPowerTwo()) <= 15) {
                if (twoPass == false) {

                    choice2 = rand() % two.ShowhandCount() + 1;
                    choice2 = choice2 - 1;
                    cout << "Player 2 played a " << two.playCard(choice2) << endl << endl;
                    main.setPlayertwo(two.playCard(choice2));

                    two.RemoveCard(choice2);
                }
            }
            else
            {
                if (twoPass == false)
                {
                    twoPass = true;
                    cout << "Player 2 has passed!" << endl;

                }
            }
            if (twoPass != true || onePass != true) {

                main.display();
            }

        }



        if (main.getPowerOne() > main.getPowerTwo())
        {
            cout << "Player 1 Wins!" << endl;
            main.setRoundsWonOne(1);
        }
        else if (main.getPowerOne() < main.getPowerTwo())
        {
            cout << "Player 2 Wins!" << endl;
            main.setRoundsWonTwo(1);
        }
        else if (main.getPowerOne() == main.getPowerTwo())
        {
            cout << "Draw!" << endl;
            main.setRoundsWonOne(1);
            main.setRoundsWonTwo(1);
        }

        cout << "Score: Player 1 " << main.getRoundsWonOne() << endl << " Player 2 " << main.getRoundsWonTwo() << endl;
        main.pause();
        onePass = false;
        twoPass = false;
        main.reset();
        //one.refillHand();
        //two.refillHand();
        int choice = 0;
        int choice2 = 0;
        system("CLS");
        if (main.getRoundsWonOne() == 2 || main.getRoundsWonTwo() == 2)
        {
            round = 4;
        }
        ++round;
    }
    cout << "Final score" << main.getRoundsWonOne() << " / " << main.getRoundsWonTwo() << endl;
}