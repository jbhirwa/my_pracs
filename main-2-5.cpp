#include <iostream>
extern bool is_descending(int array[], int n);

int main()
{
    int arr[8] = {2, 2, 5, 9, 9, 9, 8, 8};
    bool sorted = is_descending(arr, 8);
    if (sorted == true)
        std::cout << "true";
    else
        std::cout << "false";
}