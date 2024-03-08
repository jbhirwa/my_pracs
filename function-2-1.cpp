#include <iostream>

// {
//     std::string base2;

//     while (base10 > 0)
//     {
//         if ((base10 % 2) == 0)
//             base2.insert(base2.begin(), '0');
//         else
//             base2.insert(base2.begin(), '1');
//         base10 >>= 1;
//     }
//     std::cout << base2 << std::endl;
// }
// try
//     {
//         std::stoi(base10);
//     }
//     catch (const std::invalid_argument &e)
//     {
//         std::cerr << "Invalid argument: " << e.what() << std::endl;
//         return 1;
//     }
//     catch (const std::out_of_range &e)
//     {
//         std::cerr << "Out of range: " << e.what() << std::endl;
//         return 1;
//     }

void print_binary_str(std::string decimal_number)
{
    int num = 0;
    std::string bin;
    try
    {
        num = std::stoi(decimal_number);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    // std::cout << num << std::endl;
    while (num > 0)
    {
        if ((num % 2) == 0)
            bin.insert(bin.begin(), '0');
        else
            bin.insert(bin.begin(), '1');
        num >>= 1;
    }
    std::cout << bin << std::endl;
}