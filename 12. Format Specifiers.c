#include<stdio.h>
int main()
{
    printf("Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.");
    
    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'D';

    printf("\nMy number is %d and my letter is %c", myNum, myLetter);
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    int MyNumber = 224;
    printf("My favorite number is: %d", MyNumber);

    return 0;
}