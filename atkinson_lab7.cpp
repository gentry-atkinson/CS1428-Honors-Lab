//Your Name
//CS1428 Fall 2019
//Lab 7

#include<stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;

char pickPlayerMove();
char pickComputerMove(char);
char decideWinner(char, char);
void printScore(int, int);

int main () {
    int playerScore = 0, computerScore = 0; //start both with 0 score
    char anotherRound = 'y'; //var to track game end

    srand(time(NULL)); //seed the rand function

    cout << "Let's Play Rock, Paper, Scissor!!!" << endl;
    cout << "----------------------------------" << endl;
    cout << "Rock smashes Scissors..." << endl;
    cout << "Scissors cut Paper..." << endl;
    cout << "Paper covers Rock..." << endl << endl;

    //Enter the main game loop
    while(anotherRound == 'y') {
        char playerMove = pickPlayerMove();
        char computerMove = pickComputerMove(playerMove);

        switch(decideWinner(playerMove, computerMove)){
            case 'P':
                playerScore++;
                break;
            case 'C':
                computerScore++;
                break;
        }
        do{
            cout << "Play another round? (y/n)";
            cin >> anotherRound;
        } while (anotherRound != 'y' && anotherRound != 'n');
    }
    printScore(playerScore, computerScore);
    return 0;
}

/****************************************************/
//Pick Player Move
//Ask a player for a move. Must return:
    // 'R' for rock
    // 'P' for paper
    // 'S' for scissor
char pickPlayerMove(){
    char choice;
    do {
        cout << "Choose (R) for Rock, (P) for Paper or (S) for Scissor: ";
        cin >> choice;
    }while(choice != 'R' && choice != 'P' && choice != 'S');
    return choice;
}


/****************************************************/
//Pick Computer Move
//Randomly decide a move for the computer. Should never be the same as the player's
//Must return 'R', 'P', or 'S'
char pickComputerMove(char playerMove){
    //use rand() to choose the computer's move
    //use a loop to ensure that the computer's move is never the same as the player's
    int choice = rand() % 2;
    //cout << choice << endl;
    if (playerMove == 'R'){
        switch(choice){
            case 0:
                cout << "I choose Paper" << endl;
                return 'P';
            case 1:
            cout << "I choose Scissors" << endl;
                return 'S';
        }
    }
    else if (playerMove == 'P'){
        switch(choice){
            case 0:
                cout << "I choose Rock" << endl;
                return 'R';
            case 1:
                cout << "I choose Scissors" << endl;
                return 'S';
        }
    }
    else {
        switch(choice){
            case 0:
                cout << "I choose Rock" << endl;
                return 'R';
            case 1:
                cout << "I choose Paper" << endl;
                return 'P';
        }
    }
}


/****************************************************/
//Decide Winner
//Compare the player's move and the computer to choose the winner based on:
    //Rock 'R' beats Scissors 'S'
    //Scissors 'S' beat Paper 'P'
    //Paper 'P' beats Rock 'R;
//Must return:
    //'P' for player wins
    //'C' for computer wins
char decideWinner(char playerMove, char computerMove){
    //fill in the function body
    if (playerMove == 'R'){
        if (computerMove == 'P') return 'C';
        else return 'P';
    }
    else if (playerMove == 'P'){
        if (computerMove == 'S') return 'C';
        else return 'P';
    }
    else{
        if (computerMove == 'R') return 'C';
        else return 'P';
    }
}

/****************************************************/
//Print Score
//Print the score of the game with NICE FORMATTING
void printScore(int playerScore, int computerScore){
    cout << endl << "---------------------------------" << endl;
    cout << " Player: " << playerScore << " | Computer: " << computerScore << endl;
    cout << "---------------------------------" << endl;
    return;
}
