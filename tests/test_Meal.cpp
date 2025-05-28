#include <gtest/gtest.h>
#include "builder/Meal.h"

TEST(MealTest, AddAndGetItems) {
    Meal meal;
    meal.addItem("Item1");
    meal.addItem("Item2");
    auto items = meal.getItems();
    ASSERT_EQ(items.size(), 2);
    EXPECT_EQ(items[0], "Item1");
    EXPECT_EQ(items[1], "Item2");
}
