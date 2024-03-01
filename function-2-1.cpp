#include <iostream>
#include <algorithm>
using namespace std;

// int min_element(int array[], int n)
// {
//     int smallest = array[0];

//     if (n < 1)
//         return (0);
//     sort(array, array + n);
//     smallest = array[0];
//     return (smallest);
// }

int min_element(int array[], int n)
{
    int smallest = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < smallest)
            smallest = array[i];
    }
    return (smallest);
}