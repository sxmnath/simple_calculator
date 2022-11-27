#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    printf("Enter the first number: ");
    scanf("%fl", &num1);
    printf("Enter the second number: ");
    scanf("%fl", &num2);
    printf("Answer: %2.1f", num1+num2);
}
