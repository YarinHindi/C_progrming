#include "NumClass.h"
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    for (int i = num1; i <= num2; i++)
    {
        if (i == num1)
        {
            printf("The Armstrong numbers are: ");
        }
        if (isArmstrong(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++)
    {
        if (i == num1)
        {
            printf("The Palindrome numbers are: ");
        }
        if (isPalindrome(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++)
    {
        if (i == num1)
        {
            printf("The Prime numbers are: ");
        }
        if (isPrime(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++)
    {
        if (i == num1)
        {
            printf("The Strong numbers are: ");
        }
        if (isStrong(i) == 1)
        {
            printf("%d", i);
            printf(" ");
        }
    }
    printf("\n");
}