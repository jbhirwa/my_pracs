extern double array_mean(int array[], int n);
#include <iostream>

int main()
{
    int score[5] = {19, 18, 21, 20, 17};
    double avg = array_mean(score, 5);
}