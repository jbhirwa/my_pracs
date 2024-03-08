#include <iostream>

extern int sum_min_max(int integers[], int length);

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    int arr[5] = {1, 2, 3, 2, 1};
    int sum = sum_min_max(arr, 5);
    std::cout << "sum" << sum << std::endl;
}