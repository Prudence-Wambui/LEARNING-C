#include<stdio.h>
int main()
{
    int myNum = 15; //myNum is 15
    myNum = 10; //myNum is 10

    int myOtherNum = 23;

    //Assign the value of myOtherNum (23) to myNum

    myNum = myOtherNum;

    //myNum is now 23, instead of 15

    printf("%d", myNum);

    return 0;
}