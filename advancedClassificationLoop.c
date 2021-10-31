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
int isPalindrome(int number)
{
    int lenght = 0;
    int temp = number;
    while (number > 0)
    {
        lenght++;
        number = number / 10;
    }

    int arr[lenght];
    for (int i = 0; i < lenght; i++)
    {
        int keep = temp % 10;
        temp = temp / 10;
        arr[i] = keep;
    }
    int j = lenght - 1;
    for (int i = 0; i < lenght / 2; i++)
    {
        if (arr[j] != arr[i])
        {
            return 0;
        }
        j = j - 1;
    }
    return 1;
}

int isArmstrong(int number)
{
    int lenght = 0;
    int temp = number;
    int temp2 = number;
    int sum = 0;
    while (number > 0)
    {
        lenght = lenght + 1;
        number = number / 10;
    }
    while (temp > 0)
    {
        int oneDigit = temp % 10;
        temp = temp / 10;
        sum = sum + power(oneDigit, lenght);
    }
    if (sum == temp2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
