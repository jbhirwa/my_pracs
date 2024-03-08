#include <iostream>
#include <algorithm>

void count_digits(int array[4][4])
{
    int nl[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            switch (array[i][j])
            {
            case 0:
                nl[0]++;
                break;
            case 1:
                nl[1]++;
                break;
            case 2:
                nl[2]++;
                break;
            case 3:
                nl[3]++;
                break;
            case 4:
                nl[4]++;
                break;
            case 5:
                nl[5]++;
                break;
            case 6:
                nl[6]++;
                break;
            case 7:
                nl[7]++;
                break;
            case 8:
                nl[8]++;
                break;
            case 9:
                nl[9]++;
                break;
            }
        }
    }
    std::cout << "0:" << std::to_string(nl[0]) << ";"
              << "1:" << std::to_string(nl[1]) << ";"
              << "2:" << std::to_string(nl[2]) << ";"
              << "3:" << std::to_string(nl[3]) << ";"
              << "4:" << std::to_string(nl[4]) << ";"
              << "5:" << std::to_string(nl[5]) << ";"
              << "6:" << std::to_string(nl[6]) << ";"
              << "7:" << std::to_string(nl[7]) << ";"
              << "8:" << std::to_string(nl[8]) << ";"
              << "9:" << std::to_string(nl[9]) << ";"
              << std::endl;
}