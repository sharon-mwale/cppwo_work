#include <iostream>
#include <cmath>

int main()
{
    int x = 300;
    float y = 350.95f;
    double t = 4000.57;

    std::cout << std::numeric_limits<int>::min() << " " << std::numeric_limits<int>::max() << std::endl; 
    std::cout << std::numeric_limits<float>::min() << " " << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::numeric_limits<char>::min() << " " << std::numeric_limits<char>::max() << std::endl;
    std::cout << std::numeric_limits<long>::min() << " " << std::numeric_limits<long>::max() << std::endl;
    std::cout << std::numeric_limits<double>::min() << " " << std::numeric_limits<double>::max() << std::endl;
    std::cout << 2147483647 + 10;
    std::cout << sizeof(char);


    return 0; 
}

   /* double a;
    double b;
    double c;
    double d;

    double r  = (a + b + c + d) / (2 * a);
    
    return 0;*/ 