#ifndef ITEM_H
#define ITEM_H
#include <string>

class item {
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    item(int id, const std::string& name, int quantity, double price);
    int get_id() const;
    std::string get_name() const;
    int get_quantity() const;
    double get_price() const;
    void update(int update_id, const std::string& new_name = "", int new_quantity = -1, double new_price = -1);
    void display() const;
};
#endif