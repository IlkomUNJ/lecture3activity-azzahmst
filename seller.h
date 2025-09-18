#ifndef SELLER_H
#define SELLER_H

#include "user.h"
#include "item.h"
#include <vector>
#include <iostream>

class seller : public user {
private:
    int bank_account_id;
    std::vector<item> stock;

public:
    seller(int id, const std::string& name, int bank_account_id);

    void add_item(const item& i);
    void update_item(int item_id, const std::string& new_name = "", int new_qty = -1, double new_price = -1);
    void display_info() const override;
};
#endif