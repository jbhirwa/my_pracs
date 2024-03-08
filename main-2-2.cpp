#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main()
{
    // 18
    // 16 8 4 2 1
    int arr[5] = {1, 0, 0, 1, 0};
    int result = binary_to_int(arr, 5);
    std::cout << result << std::endl;
    return 0;
}