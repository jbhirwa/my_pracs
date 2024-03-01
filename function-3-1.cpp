#include <iostream>

bool is_fanarray(int array[], int n)
{
    bool fan = true;
    int i = 0;
    if (n < 1)
        return (false);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == array[n - i - 1])
            fan = true;
        else
        {
            fan = false;
            break;
        }
    }

    return fan;
}