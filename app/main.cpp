#include <iostream>
#include <memory>
#include "builder/MealDirector.h"
#include "builder/VegMealBuilder.h"
#include "builder/NonVegMealBuilder.h"

int main() {
    VegMealBuilder vegBuilder;
    MealDirector director1(&vegBuilder);
    director1.constructMeal();
    auto vegMeal = director1.getMeal();
    std::cout << "Veg Meal:\n";
    vegMeal->showItems();

    NonVegMealBuilder nonVegBuilder;
    MealDirector director2(&nonVegBuilder);
    director2.constructMeal();
    auto nonVegMeal = director2.getMeal();
    std::cout << "Non-Veg Meal:\n";
    nonVegMeal->showItems();

    return 0;
}
