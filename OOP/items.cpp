#include <iostream>
#include "items.h"

Item::Item(int p, int q)
{
    price = p;
    quantity = q;
    std::cout << "Const called\n";
}

void Item::set_price(int x)
{
    price = x;
};

int Item::get_price()
{
    return price;
}
void Item::set_quantity(int x)
{
    quantity = x;
};

int Item::get_quantity()
{
    return quantity;
}
int Item::calculate_total_price(int x, int y)
{
    return price * quantity;
}
Item::~Item()
{
    std::cout << "Release Resourses to hardware\n";
}
void Item::instantiate_from_csv()
{
    // std::ofstream file("demo.txt");
}