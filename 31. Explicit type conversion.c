#include<stdio.h>
int main()
{
    printf("Explicit conversion is done manually by placing the type in parentheses () in front of the value");

    //Manual conversion: int to float
    float sum = (float) 5/2;

    printf("\n%f", sum);

    int num1 = 5;
    int num2 = 2;
    float sum1 = (float) num1/num2;

    printf("\n%f", sum1);
    return 0;
}