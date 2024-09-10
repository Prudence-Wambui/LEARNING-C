#include<stdio.h>
int main()
    {
        printf("Implicit conversion is done automatically by the compiler when you assign a value of one data type to another");
        
        //Automatic conversion: int to float
        float myFloat = 9;

        printf("\nAutomatic conversion: int to float %f", myFloat);

        //Automatic conversion: float to int
        int myInt = 9.99;

        printf("\nAutomatic conversion: float to int %d", myInt);

        return 0;
    }