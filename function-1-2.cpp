#include <iostream>

int is_identity(int array[10][10])
{
    int zeros = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[i][j] == 0)
                zeros++;
        }
        if (zeros != 9)
            return 0;
        zeros = 0;
        if (array[i][i] != 1)
            return 0;
    }
    return 1;
}