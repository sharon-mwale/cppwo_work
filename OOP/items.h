#ifndef ITEM_H
#define ITEM_H
#include <iostream>

class Item
{
private:
    int price;
    int quantity;
    std::string name;

public:
    Item() = default;
    Item(int p, int q);
    void set_price(int x);

    int get_price();

    void set_quantity(int x);

    int get_quantity();

    int calculate_total_price(int x, int y);
    static void instantiate_from_csv();
    ~Item();
};

#endif

// name property getter and setter
// metheod apply_discount() also pay rate = 0.8

// Phone.cpp Phone.h