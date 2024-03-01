extern int median_array(int array[], int n);
#include <iostream>

int main()
{
    int array[6] = {1, 2, 3, 4, 1, 5};
    int result = median_array(array, 6);
    std::cout << "\n" + std::to_string(result);
    return (0);
}