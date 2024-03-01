#include <iostream>

double weighted_average(int array[], int n)
{
    int i = 0;
    int occur[n];
    double sum;

    //     for (int i = 0; i < n; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (array[j] == array[i])
    //             k++;
    //     }
    //     occur[i] = k;
    // }
    if (n < 1)
        return (0);
    while (i != n)
    {
        int j = 0;
        int k = 0;
        while (j != n)
        {
            if (array[j] == array[i])
            {
                k++;
                j++;
            }
            else
                j++;
        }
        occur[i] = k;
        i++;
    }
    for (int p = 0; p < n; p++)
    {
        sum += ((double)array[p] * (double)occur[p] / (double)n);
    }
    std::cout << sum;
    return (sum);
}