#ifndef BANK_H
#define BANK_H
#include "bankcustomer.h"
#include <vector>

class bank {
private:
    std::vector<bankcustomer> customers;
    
public:
    void add_customer(const bankcustomer& c);
};
#endif