#include <iostream>

int median_array(int array[], int n)
{
    int median = 0;
    std::sort(array, array + n);
    for (int i = 0; i < n; i++)
        std::cout << array[i];
    // if (n % 2 == 0)
    // {
    //     median += array[n / 2] + array[(n / 2) - 1];
    //     median /= 2.0;
    //     return (array[median]);
    // }
    return (array[n / 2]);
}