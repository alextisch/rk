#include "builder/NonVegMealBuilder.h"

NonVegMealBuilder::NonVegMealBuilder() : meal_(std::make_unique<Meal>()) {}

void NonVegMealBuilder::buildBurger() {
    meal_->addItem("Chicken Burger");
}
void NonVegMealBuilder::buildDrink() {
    meal_->addItem("Pepsi");
}
std::unique_ptr<Meal> NonVegMealBuilder::getMeal() {
    return std::move(meal_);
}
