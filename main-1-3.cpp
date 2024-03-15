#include <iostream>
using namespace std;
extern double *duplicateArray(double *array, int size);

int main()
{
    double array[5] = {9, 2, 1, 4, 5};
    double *arr = duplicateArray(array, 5);
    return (0);
}