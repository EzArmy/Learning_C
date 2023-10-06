#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //The Guess Game
    //using the lib TIME to define a seed
    srand(time(NULL));

    int minValue = 0, maxValue = 10;
                        //rand() function to give for all plays any number between 0 - 10
    int correctGuess = rand() % (maxValue - minValue + 1) + minValue;
    int Guess;

    usleep(1000);

    printf("This is a GUESS game:\n");
    printf("INSTRUCTIONS\n");
    printf("Randomly a number will be selected, your task is insert a correctly number on the prompt\n");
    printf("\n");

    printf("What is the number?\n");
    scanf("%d", &Guess);

    while(Guess != correctGuess){
        printf("Wrong!!!\n");
        printf("What is the number?\n");
        scanf("%d", &Guess);
    }

    if( Guess == CorrectAnswer){
        printf("Congratulations!!! You're winner\n");
        printf("Game-over\n");
    }


    printf("Hello world!\n");
    return 0;
}
