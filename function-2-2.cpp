#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int result = 0;
    int power = 1;
    for (int i = 0; i < number_of_digits; i++)
    {
        result += binary_digits[(number_of_digits - 1) - i] * power;
        power *= 2;
    }
    return result;
}