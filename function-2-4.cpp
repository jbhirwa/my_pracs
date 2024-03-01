#include <iostream>

bool is_ascending(int array[], int n)
{
    bool sorted = std::is_sorted(array, array + n);
    if (sorted && n > 0)
        return (true);
    else
        return (false);
    // if (n < 1)
    //     return (0);
    // for (int i = 0; i < n; i++)
    //     if (array[i] <= array[i + 1])
    //         return false;
    // return true;
}