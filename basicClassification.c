#include "NumClass.h"

int isPrime(int number)
{

    for (int i = 2; i < number; i = i + 1)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int factorial(int number)
{
    int sum = 1;
    for (int i = 2; i <= number; i = i + 1)
    {
        sum = sum * i;
    }
    return sum;
}
int isStrong(int number)
{
    int sum = 0;
    int temp = number;
    while (number > 0)
    {
        int keep = number % 10;
        sum = sum + factorial(keep);
        number = number / 10;
    }
    if (sum == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
