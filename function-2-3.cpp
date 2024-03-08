#include <iostream>

int sum_if_palindrome(int integers[], int length)
{
    if (length <= 0)
        return -1;
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += integers[i];
    return sum;
}

bool is_palindrome(int integers[], int length)
{
    if (length <= 0)
        return -1;
    for (int i = 0; i < length; i++)
        if (integers[i] != integers[(length - 1) - i])
            return 0;
    return 1;
}

int sum_array_elements(int integers[], int length)
{
    int sum = 0;
    if (length <= 0)
        return -1;
    bool palindrome = is_palindrome(integers, length);
    if (palindrome == 1)
        sum = sum_if_palindrome(integers, length);
    else
        return (-2);
    return (sum);
}