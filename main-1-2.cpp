extern void modifyArray(double *array, int size, double value);
#include <iostream>
using namespace std;

int main()
{
    double array[5] = {9, 2, 1, 4, 5};
    modifyArray(array, 5, 2);
    for (int i = 0; i < 5; i++)
        cout << array[i] << " ";
    return (0);
}