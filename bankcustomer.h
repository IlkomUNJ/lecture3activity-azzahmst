#ifndef BANKCUSTOMER_H
#define BANKCUSTOMER_H

#include <string>

class bankcustomer {
private:
    int id;
    std::string name;
    double saving;

public:
    bankcustomer(int id, const std::string& name, double saving = 0.0);

    int get_id() const;
    std::string get_name() const;
    double get_saving() const;
    void deposit(double amount);
    void withdraw(double amount);
};
#endif