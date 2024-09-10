#include<stdio.h>
int main()
{
    //Set the maximum possible score in the game to 500
    int max_score = 500;

    //The actual score of the user = 423;
    int userScore = 423;

    /*Calculate the percentage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate*/

    float percentage = (float) userScore / max_score * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);
    return 0;
}