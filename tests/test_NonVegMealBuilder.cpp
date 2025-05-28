#include <gtest/gtest.h>
#include "builder/NonVegMealBuilder.h"
#include "builder/MealDirector.h"

TEST(NonVegMealBuilderTest, BuildsNonVegMeal) {
    NonVegMealBuilder builder;
    MealDirector director(&builder);
    director.constructMeal();
    auto meal = director.getMeal();
    auto items = meal->getItems();
    ASSERT_EQ(items.size(), 2);
    EXPECT_EQ(items[0], "Chicken Burger");
    EXPECT_EQ(items[1], "Pepsi");
}
