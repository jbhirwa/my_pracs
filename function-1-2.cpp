#include <iostream>

double array_mean(int array[], int n)
{
    double average = 0;

    if (n < 1)
        return (0);
    for (int i = 0; i < n; i++)
    {
        average += array[i];
    }
    average /= n;
    return (average);
}