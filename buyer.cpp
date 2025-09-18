#include "buyer.h"

buyer::buyer(int id, const std::string& name, int bank_account_id)
    : user(id, name), bank_account_id(bank_account_id) {}

void buyer::display_info() const {
    std::cout << "buyer[" << id << "] " << name << " | bank acc: " << bank_account_id << "\n";
}