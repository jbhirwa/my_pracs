#include <iostream>

extern void count_digits(int array[4][4]);

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {2, 3, 4, 5},
                     {3, 4, 5, 6},
                     {4, 5, 6, 7}};
    count_digits(arr);
    return 0;
}