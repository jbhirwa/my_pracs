extern int sum_two_arrays(int array[], int secondarray[], int n);
#include <iostream>

int main()
{
    int age2[6] = {19, 18, 21, 20, 17, 20};
    int age[6] = {19, 18, 21, 20, 17, 20};
    int sum = sum_two_arrays(age, age2, 6);
    return (0);
}