# c-problem-from-university-
Beginner C problem.
c guessing game.
#include <stdio.h>

int main() {
    int X, guess, flag = 0, chances = 3;


    printf("Player-1, enter your number: ");
    scanf("%d", &X);


    printf("Player-2, guess the number: ");
    scanf("%d", &guess);

    if (guess == X) {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    }

    else {
        printf("Wrong, %d Chance(s) Left!\n", --chances);}


    if (!flag && chances) {
        printf("Player-2, guess the number: ");
        scanf("%d", &guess);




        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            flag = 1;}




        else {
            printf("Wrong, %d Chance(s) Left!\n", --chances);}
    }


    if (!flag && chances) {
        printf("Player-2, guess the number: ");
        scanf("%d", &guess);



        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            flag = 1;}


        else {
            printf("Wrong, %d Chance(s) Left!\n", --chances);}
    }





    if (!flag) {
        printf("Player-1 wins!\n");}

    return 0;
}

