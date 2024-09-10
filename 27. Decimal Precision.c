#include<stdio.h>
int main()
{
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n",myFloatNum);
    printf("%lf\n", myDoubleNum);

    printf("%f\n", myFloatNum);
    printf("%.1f\n", myFloatNum);
    printf("%.2f\n", myFloatNum);
    printf("%.3f\n", myFloatNum);

    return 0;
}