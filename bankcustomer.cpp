#include "bankcustomer.h"

bankcustomer::bankcustomer(int id, const std::string& name, double saving)
    : id(id), name(name), saving(saving) {}

int bankcustomer::get_id() const { return id; }
std::string bankcustomer::get_name() const { return name; }
double bankcustomer::get_saving() const { return saving; }

void bankcustomer::deposit(double amount) {
    saving += amount;
}

void bankcustomer::withdraw(double amount) {
    if (amount <= saving) saving -= amount;
}