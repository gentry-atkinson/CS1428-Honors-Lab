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

    srand(time(NULL));

    cout << "Let's Play Rock, Paper, Scissor!!!" << endl;
    cout << "----------------------------------" << endl;
    cout << "Rock smashes Scissors..." << endl;
    cout << "Scissors cut Paper..." << endl;
    cout << "Paper covers Rock..." << endl << endl;

    //Enter the main game loop
    while(anotherRound == 'y') {
        char playerMove = pickPlayerMove();
        char computerMove = pickComputerMove(playerMove);

        if(decideWinner(computerMove, playerMove) == 'P'){
            playerScore++;
        }
        else{
            computerScore++;
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
    //fill in function body
}


/****************************************************/
//Pick Computer Move
//Randomly decide a move for the computer. Should never be the same as the player's
//Print the computer's chioce
//Must return 'R', 'P', or 'S'
char pickComputerMove(char playerMove){
    //use rand() to choose the computer's move
    //use a loop to ensure that the computer's move is never the same as the player's
}


/****************************************************/
//Decide Winner
//Compare the player's move and the computer to choose the winner based on:
    //Rock 'R' beats Scissors 'S'
    //Scissors 'S' beat Paper 'P'
    //Paper 'P' beats Rock 'R;
//Print "I win" if the computer wins. Print "You win" if the player wins
//Must return:
    //'P' for player wins
    //'C' for computer wins
char decideWinner(char computerMove, char playerMove){
    //fill in the function body
}

/****************************************************/
//Print Score
//Print the score of the game with NICE FORMATTING
void printScore(int playerScore, int computerScore){
    //fill in function body
}
