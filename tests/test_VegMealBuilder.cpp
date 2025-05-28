#include <gtest/gtest.h>
#include "builder/VegMealBuilder.h"
#include "builder/MealDirector.h"

TEST(VegMealBuilderTest, BuildsVegMeal) {
    VegMealBuilder builder;
    MealDirector director(&builder);
    director.constructMeal();
    auto meal = director.getMeal();
    auto items = meal->getItems();
    ASSERT_EQ(items.size(), 2);
    EXPECT_EQ(items[0], "Veg Burger");
    EXPECT_EQ(items[1], "Coke");
}
