#include<stdio.h>
int main()
{
    printf("The memory size of a variable varies depending on the data type.\nThe int data type has a memorysize of 4 bytes max\nThe float data type has a memory size of 4 bytes\nThe double data type has amemory size of 8 bytes\n the data type char has a memory size of 1 byte\nTo actually get the size in bytes of a data type or variable, we use the sizeof operator\nExample");

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("\n%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;

}