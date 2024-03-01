#include <iostream>
extern int array_sum(int array[], int n);

int main()
{
    int sum = 0;
    int age[5] = {19, 18, 21, 20, 17};
    sum = array_sum(age, 5);
}