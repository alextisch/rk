#include "builder/VegMealBuilder.h"

VegMealBuilder::VegMealBuilder() : meal_(std::make_unique<Meal>()) {}

void VegMealBuilder::buildBurger() {
    meal_->addItem("Veg Burger");
}
void VegMealBuilder::buildDrink() {
    meal_->addItem("Coke");
}
std::unique_ptr<Meal> VegMealBuilder::getMeal() {
    return std::move(meal_);
}
