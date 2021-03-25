#include <iostream>
#include "Meal.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"

int main(int argc, char *argv[]) {

   // Meals like Snacks can also be created (instead of just Breakfast, Lunch, Dinner)
   // More meal variables can be added here (meal2,meal3...)

   if(argv[2] == NULL)
   {
      if(std::string(argv[1]) == "Dinner")
         std::cout << "Unable to process: Main is missing, side is missing, dessert is missing" << std::endl;
      else
         std::cout << "Unable to process: Main is missing, side is missing" << std::endl;

   }
   else
   {
      if(std::string(argv[1]) == "Breakfast")
      {
         Breakfast* meal1 = new Breakfast();
         std::string word1 = argv[2];
         meal1->getDishes(word1);
         meal1->getOutput();  
      }

      else if (std::string(argv[1]) == "Lunch")
      {
         Lunch* meal1 = new Lunch();
         std::string word1 = argv[2];
         meal1->getDishes(word1);
         meal1->getOutput();  
      }
      else
      {
         Dinner* meal1 = new Dinner();
         std::string word1 = argv[2];
         meal1->getDishes(word1);
         meal1->getOutput();  
      }
   }  
}