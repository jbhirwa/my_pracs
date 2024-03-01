#include <iostream>

bool is_fanarray(int array[], int n)
{
    if (n < 1)
        return false;
    for (int i = 0; i < n / 2; i++)
        if (array[i] != array[n - i - 1])
            return false;
    return true;
}

// {
//     bool fan = true;
//     if (n < 1)
//         return (false);
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] == array[n - i - 1])
//             fan = true;
//         else
//         {
//             fan = false;
//             break;
//         }
//     }
//     return fan;
// }
