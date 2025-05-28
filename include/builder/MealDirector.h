#pragma once
#include "MealBuilder.h"

class MealDirector {
public:
    explicit MealDirector(MealBuilder* builder);
    void constructMeal();
    std::unique_ptr<Meal> getMeal();
private:
    MealBuilder* builder_;
};
