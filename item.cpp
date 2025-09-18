#include "item.h"
#include <iostream>

item::item(int id, const std::string& name, int quantity, double price)
    : id(id), name(name), quantity(quantity), price(price) {}

int item::get_id() const { return id; }
std::string item::get_name() const { return name; }
int item::get_quantity() const { return quantity; }
double item::get_price() const { return price; }

void item::update(int update_id, const std::string& new_name, int new_quantity, double new_price) {
    if (id == update_id) {
        if (!new_name.empty()) name = new_name;
        if (new_quantity >= 0) quantity = new_quantity;
        if (new_price >= 0) price = new_price;
    }
}

void item::display() const {
    std::cout << "item[" << id << "] " << name
              << " | qty: " << quantity
              << " | price: " << price << "\n";
}