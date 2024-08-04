#include<stdio.h>
int main ()
{
    printf("For Characters we use the Format Specifier (c)\nFor Multiple characters/strings we use the format specifier (s)\n");
    char myText[] = "Hello";
    printf("%s", myText);
    return 0;
}