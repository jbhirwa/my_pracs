#include <iostream>

double weighted_average(int array[], int n)
{
    int occur[n];
    double sum = 0;
    if (n < 1)
        return (0);

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[j] == array[i])
                k++;
        }
        occur[i] = k;
    }
    for (int p = 0; p < n; p++)
    {
        sum += ((double)array[p] * (double)occur[p] / (double)n);
    }
    return (sum);
}