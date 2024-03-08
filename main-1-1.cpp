extern int sum_diagonal(int array[4][4]);
#include <iostream>

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {2, 3, 4, 5},
                     {3, 4, 5, 6},
                     {4, 5, 6, 7}};
    int sum = sum_diagonal(arr);
    std::cout << sum << std::endl;
}