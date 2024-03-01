#include <iostream>

void two_five_nine(int array[], int n)
{
    int two = 0;
    int five = 0;
    int nine = 0;
    char sc = 59;

    for (int i = 0; i < n; i++)
    {
        switch (array[i])
        {
        case 2:
            two++;
            break;
        case 5:
            five++;
            break;
        case 9:
            nine++;
            break;
        }
    }
    std::cout << "2:" + std::to_string(two) + sc + "5:" + std::to_string(five) + sc + "9:" + std::to_string(nine) + sc;
}