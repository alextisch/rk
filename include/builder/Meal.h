#pragma once
#include <string>
#include <vector>

class Meal {
public:
    void addItem(const std::string& item);
    void showItems() const;
    const std::vector<std::string>& getItems() const;
private:
    std::vector<std::string> items_;
};
