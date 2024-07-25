#include<stdio.h>
int main()
{
    printf("A variable is a container that is used to store values.\nThe int variable is used to store integer values.\nThe float variable is used to store decimal number values.\nThe char variable is used to store single characters surrounded by single quotation marks.");
    
    //Declare a variable and assign a value
    int myNum = 15;

    //Declare a variable
    int myNum1;

    //Assign a value to the variable
    myNum1 = 15;

    printf(myNum); //Nothing happens
    printf(myNum1); //Nothing happens

    return 0;
}