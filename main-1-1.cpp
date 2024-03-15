extern double arrayMin(double *array, int size);
#include <iostream>
using namespace std;

int main()
{
    double array[5] = {9, 2, 1, 4, 5};
    double small = arrayMin(array, 5);
    cout << small;
}