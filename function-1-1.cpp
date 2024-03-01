#include <iostream>

int array_sum(int array[], int n)
{
    int i = 0;
    int sum = 0;
    if (n < 1)
        return 0;
    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return (sum);
}