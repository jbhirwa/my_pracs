#include <iostream>

extern int sum_array_elements(int integers[], int length);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int arr[5] = {1, 2, 3, 2, 1};
    int result = sum_array_elements(arr, 0);
    std::cout << result << std::endl;
    return 0;
}