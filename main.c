#include "NumClass.h"
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("please enter two positive integer numbers");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf(" ");
    printf("\n");
    if (num1 > num2)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++)
    {
        if (isStrong(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
}