#include <iostream>
#include "Meal.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"

int main(int argc, char *argv[]) {

   // Meals like Snacks can also be created (instead of just Breakfast, Lunch, Dinner)
   // More meal variables can be added here (meal2,meal3...)

   std::string meal_name;
   std::string dishes;
   std::ifstream myfile (argv[1]);

   // If multiple commands, the meal_name and dishes variables can be turned into a arrays of strings
   if (myfile)
   {
      while (myfile)
      {
         myfile>>meal_name>> dishes;   // Reads from file strings until there is a space
      }
      myfile.close();
  }

   // Looks for the Dishes and Sorts the Output for Each Meal
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
         //std::string word1 = argv[2];
         meal1->getDishes(dishes);
         meal1->getOutput();  
      }

      else if (meal_name == "Lunch")
      {
         Lunch* meal1 = new Lunch();
         //std::string word1 = argv[2];
         meal1->getDishes(dishes);
         meal1->getOutput();  
      }
      else
      {
         Dinner* meal1 = new Dinner();
         //std::string word1 = argv[2];
         meal1->getDishes(dishes);
         meal1->getOutput();  
      }
   }
}