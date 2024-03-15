#include <iostream>

double arrayMin(double *array, int size)
{
    double smallest = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] < smallest)
            smallest = array[i];
    return (smallest);
}