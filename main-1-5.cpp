#include <iostream>
extern void print_summed(int array1[3][3], int array2[3][3]);

int main()
{
    int arr1[3][3] = {{1, 2, 3},
                      {2, 3, 4},
                      {4, 5, 6}};
    int arr2[3][3] = {{1, 2, 3},
                      {2, 3, 4},
                      {4, 5, 6}};
    print_summed(arr1, arr2);
    return 0;
}