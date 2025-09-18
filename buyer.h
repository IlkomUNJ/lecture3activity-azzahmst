#ifndef BUYER_H
#define BUYER_H
#include "user.h"
#include <iostream>

class buyer : public user {
private:
    int bank_account_id;

public:
    buyer(int id, const std::string& name, int bank_account_id);
    void display_info() const override;
};
#endif