#pragma once
#include "MealBuilder.h"

class NonVegMealBuilder : public MealBuilder {
public:
    NonVegMealBuilder();
    void buildBurger() override;
    void buildDrink() override;
    std::unique_ptr<Meal> getMeal() override;
private:
    std::unique_ptr<Meal> meal_;
};
