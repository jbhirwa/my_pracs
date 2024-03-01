#include <iostream>
void print_pass_fail(char grade)
{
    if (grade >= 'A' && grade <= 'E')
    {
        switch (grade)
        {
        case 'A':
            std::cout << "Pass";
            break;
        case 'B':
            std::cout << "Pass";
            break;
        case 'C':
            std::cout << "Pass";
            break;
        case 'D':
            std::cout << "Fail";
            break;
        case 'E':
            std::cout << "Fail";
            break;
        }
    }
    else
        std::cout << "Nothing";
}