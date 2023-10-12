#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int playerScore = 0, computerScore = 0;
    srand(time(0));
    cout << "Welcome to the Rock, Paper, Scissors game!" << endl;

    while (true)
    {
        int computerMove = rand() % 3 + 1;
        int playerChoice;

        cout << endl;
        cout << "Choose: (1) Rock, (2) Paper, (3) Scissors, or (0) to quit: ";
        cin >> playerChoice;

        if (playerChoice == 0)
            break;

        if (playerChoice < 1 || playerChoice > 3)
        {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << endl;

        cout << "You chose: ";
        switch (playerChoice)
        {
            case 1:
                cout << "Rock" << endl;
                break;
            case 2:
                cout << "Paper" << endl;
                break;
            case 3:
                cout << "Scissors" << endl;
                break;
        }

        cout << "The computer chose: ";
        switch (computerMove)
        {
            case 1:
                cout << "Rock" << endl;
                break;
            case 2:
                cout << "Paper" << endl;
                break;
            case 3:
                cout << "Scissors" << endl;
                break;
        }

        if (playerChoice == computerMove)
        {
            cout << "It's a tie!" << endl;
            cout << "Player Score: " << playerScore << "  Computer Score: " << computerScore;
            continue;
        }
        else if ((playerChoice == 1 && computerMove == 3) ||
                 (playerChoice == 2 && computerMove == 1) ||
                 (playerChoice == 3 && computerMove == 2))
        {
            cout << "You won!" << endl;
            playerScore++;
        }
        else
        {
             cout << "You lost!" << endl;
            computerScore++;
        }

        cout << "Player Score: " << playerScore << "  Computer Score: " << computerScore;
    }

    cout << endl;
    cout << "The game has ended.";
    if(playerScore > computerScore)
        cout << "You won!!! Final Score: Player: " << playerScore << " Computer's final score: " << computerScore;
    else if( computerScore > playerScore)
        cout << "You lost :( Final Score: Player: " << playerScore << " Computer's final score: " << computerScore;
    else
         cout << "It's a tie! Final Score: Player: " << playerScore << " Computer's final score: " << computerScore;

    return 0;
}
