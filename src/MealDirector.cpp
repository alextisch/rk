#include "builder/MealDirector.h"

MealDirector::MealDirector(MealBuilder* builder) : builder_(builder) {}

void MealDirector::constructMeal() {
    builder_->buildBurger();
    builder_->buildDrink();
}
std::unique_ptr<Meal> MealDirector::getMeal() {
    return builder_->getMeal();
}
