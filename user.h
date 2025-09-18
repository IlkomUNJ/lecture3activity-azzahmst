#ifndef USER_H
#define USER_H
#include <string>

class user {
protected:
    int id;
    std::string name;

public:
    user(int id, const std::string& name) : id(id), name(name) {}
    virtual ~user() = default;

    int get_id() const { return id; }
    std::string get_name() const { return name; }

    virtual void display_info() const = 0;
};
#endif