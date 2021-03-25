#ifndef MEAL_H_
#define MEAL_H_
#include <iostream>
#include <fstream>
#include <string>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class Meal{
public:
   Meal( );
   void getDishes(std::string command);
   void getOutput();                    // Output will be inherited depending on the meal
protected:
   std::string main_dish;               // Initializes a Main Dish for all Meals
   std::string side_dish;               // Initializes a Side Dish for all Meals
   std::string drink;                   // Initializes a Drink for all Meals
   std::string drink2 = "Water";        // Initializes 2nd Drink for all Meals (optional drink)
   std::vector<std::string> tokens;     // Vector Token used for spliting the Dishes String
   std::string token;
   int count1 = 0;                      // Count for Main Dish
   int count2 = 0;                      // Count for Side Dish
   int count3 = 0;                      // Count for Drink
   int count4 = 0;                      // Count for Dessert (Dinner only)
 };
#endif