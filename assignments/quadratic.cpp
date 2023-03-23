#include <iostream>
#include <cmath>
#include <iomanip>
/**
 * name: Sharon Mwale
 * ID: 477486/10/1
 * Course: Programming with C++
 */
int main()
{
    double a = 1;
    double b = -17;
    double c = -12;

    int pow = std::pow(b, 2);
    double formuler = std::sqrt(pow - (4 * a * c));

    double r = (-b + formuler) / 2 * a;
    double l = (-b - formuler) / 2 * a;

    std::cout << std::setprecision(2);
    std::cout << "either x: " << l << " Or x: " << r << std::endl;
    return 0;
}

/**
 * formuler = -b +- (vb^2 - 4ac)/ 2a
 * two = -b + (vb^2 - 4ac)/ 2a
 * three -b - (vb^2 - 4ac)/ 2a
 * pow = pow(b, 2)
 * expr = sqrt(pow - (4ac)) /2a
 * r = -b + expr
 * l = -b - expr
 * print l and r
 */