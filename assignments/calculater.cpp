#include <iostream>

int main()
{
    int a, b;
    float c;
    char ope;
    std::cout << "Enter a value: ";
    std::cin >> a;
    std::cout << "Enter b value: ";
    std::cin >> b;
    std::cout << "Enter operation (+, -, *, / and %): ";
    std::cin >> ope;
    if (ope == '+')
    {
        c = a + b;
        std::cout << c;
    }
    else if (ope == '-')
    {
        c = a - b;
        std::cout << "Answer: " << c << std::endl;
    }
    else if (ope == '*')
    {
        c = a * b;
        std::cout << "Answer: " << c << std::endl;
    }
    else if (ope == '/')
    {
        c = a / b;
        std::cout << "Answer: " << c << std::endl;
    }
    else if (ope == '%')
    {
        c = a % b;
        std::cout << "Answer: " << c << std::endl;
    }
    else
    {
        std::cout << "Enter wrong input\n";
    }
    return 0;
}