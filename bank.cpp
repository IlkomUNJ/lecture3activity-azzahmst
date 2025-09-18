#include "bank.h"

void bank::add_customer(const bankcustomer& c) {
    customers.push_back(c);
}