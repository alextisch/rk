#pragma once
#include "MealBuilder.h"

class VegMealBuilder : public MealBuilder {
public:
    VegMealBuilder();
    void buildBurger() override;
    void buildDrink() override;
    std::unique_ptr<Meal> getMeal() override;
private:
    std::unique_ptr<Meal> meal_;
};
