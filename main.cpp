#include <iostream>
#include "Meal.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"

int main(int argc, char *argv[]) {

   // Step 1. Opening the Tests Folder and getting the Meal Name and the Dishes
   std::string meal_name;
   std::string dishes;
   std::ifstream myfile (argv[1]);

   // If multiple commands, the meal_name and dishes variables can be turned to arrays of strings
   if (myfile)
   {
      while (myfile)
      {
         myfile>>meal_name>> dishes;   // Reads from file strings until there is a space
      }
      myfile.close();
  }

   // Step 2. Looks for the Dishes and Sorts the Output for Each Meal
       // Meals like Snacks can also be created (instead of just Breakfast, Lunch, Dinner)
       // More meal variables can be added here (meal2,meal3...)
   if(dishes.empty())
   {
      if(meal_name == "Dinner")
         std::cout << "Unable to process: Main is missing, side is missing, dessert is missing" << std::endl;
      else
         std::cout << "Unable to process: Main is missing, side is missing" << std::endl;

   }
   else
   {
      if(meal_name == "Breakfast")
      {
         Breakfast* meal1 = new Breakfast();
         meal1->getDishes(dishes);
         meal1->getOutput();  
      }

      else if (meal_name == "Lunch")
      {
         Lunch* meal1 = new Lunch();
         meal1->getDishes(dishes);
         meal1->getOutput();  
      }
      else
      {
         Dinner* meal1 = new Dinner();
         meal1->getDishes(dishes);
         meal1->getOutput();  
      }
   }
}