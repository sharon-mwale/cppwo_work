#include <iostream>

void swap(int *first, int *second)
{
    int temp;

    temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int a, b;

    std::cout << "Enter the numbers : " << std::endl;
    std::cin >> a;
    std::cin >> b;

    std::cout << "Before swap, a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap, a = " << a << ", b = " << b << std::endl;
}

/*#include <iostream>

int sum(int b, int a, int c);
int main()
{
    auto x = sum(19, 20, 4);
    std::cout << x << std::endl;
    return 0;
};
int sum(int b, int a, int c)
{
    return a + b + c;
}
double sum(double a, double c, double b)
{
    return a + b + c;
}
char sum()
{
    return a + b + c;
}

/* char *x = {"ADCBDER"};
   x[3] = 'T';
   for (int i = 0; i < 7; i++)
    std:: cout << []
*/
