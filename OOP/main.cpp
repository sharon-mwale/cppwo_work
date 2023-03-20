#include <iostream>
#include <stdio.h>
#include "items.h"

int main()
{
    Item obj(150, 20);

    auto x = obj.calculate_total_price(obj.get_price(), obj.get_quantity());
    std::cout << "Item Count: " << obj.get_quantity() << std::endl;
    std::cout << "Total: " << x << std::endl;
}