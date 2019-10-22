//Your Name
//CS1428 Fall 2018
//Lab 8

/******************************************
Your client is a small publishing firm called GenCo.
The need an application that can process some simple
information about material submitted from aspiring
authors. The have some code from a previous project
that can be re-used but need you to write the framework.
******************************************/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

const int STORY_SIZE = 3000;

void openSubmission(ifstream&, char*);
int loadStringArray(ifstream&, string[]);
int countMisspellings(string[], string[], int, int);
float calculateAuthorPay(int, int, const float);

int main(){
    //Task 1: declare an input filestream and name it "submission"

    //Task 2: use openSubmission to open "submission" to read a file named "lab8_submission.txt"

    //Task 3: create an array of strings called submissionWords with size = [STORY_SIZE]

    //Task 3: use loadStringArray to load all of the words from "lab8_submission.txt
        //into submissionWords

    //Task 4: this publishers has noticed that this author often misspells taste as taset,
        // eyes as eys, light as lihgt, and wine as winne. Create an array called
        // commonMisspellings with the values "taset", "eys", "lihgt", and "winne".

    //Task 5: use the coutMisspellings function with the submissionWords array and
        // the commonMisspellings array to count the misspellings in this story.

    //Task 6: this publishers pays $0.17 per correctly spelled word and charges a
        //penalty for misspellings. Create a constant to hold the rate and the pass it
        //to calculateAuthorPay with the word and misspelling count to calculate this
        //author's pay

    //Task7: print the total words, correctly spelled words, misspelled words, and
        // author pay to the console with NEAT FORMATTING
    return 0;
}

/**********************************
Open Submission
Input: an unopened file stream and a file name.
Returns: nothing
Side Effects: the file stream is opened with the file name.
***********************************/
void openSubmission(ifstream& submission, char* filename){
    submission.open(filename);
    return;
}

/**********************************
Load string array
Input: an opened file stream and an empty string array
Returns: the number of words read from the stream
Side Effects: the string array will be loaded with the words from the
**********************************/
int loadStringArray(ifstream& submission, string allWords[]){
    int numWords = 0;
    while (!submission.eof()){
        submission >> allWords[numWords];
        numWords++;
    }
    return numWords;
}

/**********************************
Count Misspellings
Input: a loaded array of words from the story, a loaded array of misspellings to check
Returns: the number of misspelled words
Side Effects: none
**********************************/
int countMisspellings(string story[], string mispellings[], int sizeStory, int sizeMisspellings){
    int misspelledWords = 0;
    for(int i = 0; i < sizeMisspellings; ++i){
        for(int j = 0; j < sizeStory; ++j){
            if (mispellings[i] == story[j])
                misspelledWords++;
        }
    }
    return misspelledWords;
}

/*********************************
Calculate Author Pay
Input: a count of words, a count of misspellings, a rate/word of author pay
Returns: the ammount an author will be paid
Side Effects: none
*********************************/
float calculateAuthorPay(int totalWords, int totalMisspellings, const float rate){
    return rate*(totalWords - totalMisspellings) - 10*rate*totalMisspellings;
}
