add_library(builder_pattern_impl STATIC
    Meal.cpp
    VegMealBuilder.cpp
    NonVegMealBuilder.cpp
    MealDirector.cpp
)
target_include_directories(builder_pattern_impl PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(builder_pattern_impl PUBLIC builder_pattern)
