#include <iostream>


int main()
{
    int grades[2] [5] = {
        {2, 4 , 5, 6, 0},
        {7, 8, 5, 3, 70}};

    std::cout << grades [1][4] <<std::endl;
    return 0;
}