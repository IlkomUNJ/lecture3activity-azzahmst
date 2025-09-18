#include "seller.h"

seller::seller(int id, const std::string& name, int bank_account_id)
    : user(id, name), bank_account_id(bank_account_id) {}

void seller::add_item(const item& i) {
    stock.push_back(i);
}

void seller::update_item(int item_id, const std::string& new_name, int new_qty, double new_price) {
    for (auto& it : stock) {
        if (it.get_id() == item_id) {
            it.update(item_id, new_name, new_qty, new_price);
        }
    }
}

void seller::display_info() const {
    std::cout << "seller[" << id << "] " << name << " | bank acc: " << bank_account_id << "\n";
    for (const auto& it : stock) it.display();
}