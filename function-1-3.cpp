#include <iostream>

double *duplicateArray(double *array, int size)
{
    double *array2 = new double[size];
    for (int i = 0; i < size; i++)
        array2[i] = array[i];
    // for (int i = 0; i < size; i++)
    //     std::cout << array2[i];
    return (array2);
}