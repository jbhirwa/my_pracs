extern bool is_fanarray(int array[], int n);
#include <iostream>

int main()
{
    int array[5] = {1, 2, 3, 2, 1};
    bool result = is_fanarray(array, 5);
    if (result == true)
        std::cout << "true";
    else
        std::cout << "false";
    return 0;
}