#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_WORDS 10
#define MAX_WORD_LENGTH 20

const char *wordList[MAX_WORDS] = {
    "programming",
    "hangman", 
    "computer",
    "software",
    "algorithm",
    "developer",
    "challenger",
    "langauge",
    "creative",
    "coding"
};

const char *selectRandomWord(){
    srand(time(NULL));
    return wordList[rand() % MAX_WORDS];
}