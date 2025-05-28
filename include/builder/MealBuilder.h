#pragma once
#include <memory>
#include "Meal.h"

class MealBuilder {
public:
    virtual ~MealBuilder() = default;
    virtual void buildBurger() = 0;
    virtual void buildDrink() = 0;
    virtual std::unique_ptr<Meal> getMeal() = 0;
};
