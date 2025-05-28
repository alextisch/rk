#include "builder/Meal.h"
#include <iostream>

void Meal::addItem(const std::string& item) {
    items_.push_back(item);
}
void Meal::showItems() const {
    std::cout << "Meal contains:\n";
    for (const auto& item : items_) {
        std::cout << "- " << item << std::endl;
    }
}
const std::vector<std::string>& Meal::getItems() const {
    return items_;
}
