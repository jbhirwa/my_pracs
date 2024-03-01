#include <iostream>
#include <algorithm>
using namespace std;

int max_element(int array[], int n)
{
    int largest = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
            largest = array[i];
    }
    return (largest);
}