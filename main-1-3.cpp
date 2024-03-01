extern int num_count(int array[], int n, int number);
#include <iostream>

int main()
{
    int age[6] = {19, 18, 21, 20, 17, 20};
    int count = num_count(age, 6, 20);
    return (0);
}