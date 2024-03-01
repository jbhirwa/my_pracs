#include <iostream>

bool is_ascending(int array[], int n)
{
    bool sorted = true;
    if (n < 1)
        return (0);
    sorted = std::is_sorted(array, array + n);

    return (sorted);
}