
#include "NumClass.h"

int power(int a, int b)
{
    int sum = 1;
    for (int i = 0; i < b; i++)
    {
        sum = sum * a;
    }
    return sum;
}
int isPalindromeRecursive(int zero, int number, int lenght)
{
    if (number == 0)
    {
        return zero;
    }
    else
    {
        int keep = number % 10;
        zero = zero + keep * power(10, lenght - 1);
        number = number / 10;
        lenght--;
        return isPalindromeRecursive(zero, number, lenght);
    }
}

int isPalindrome(int number)
{
    int lenght = 0;
    int temp = number;
    int number2 = 0;
    while (temp > 0)
    {
        lenght++;
        temp = temp / 10;
    }
    number2 = isPalindromeRecursive(number2, number, lenght);
    if (number2 == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isArmstrongRecursive(int sum, int number, int lenght)
{
    if (number == 0)
    {
        return sum;
    }
    else
    {
        int keep = number % 10;
        sum = sum + power(keep, lenght);
        number = number / 10;
        return isArmstrongRecursive(sum, number, lenght);
    }
}

int isArmstrong(int number)
{
    int temp = number;
    // int temp2 = number;
    int lenght = 0;
    int sum = 0;
    while (temp > 0)
    {
        lenght++;
        temp = temp / 10;
    }
    sum = isArmstrongRecursive(sum, number, lenght);
    if (sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
