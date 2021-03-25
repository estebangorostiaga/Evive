#include <iostream>
#include "Lunch.h"

Lunch::Lunch( ) {
    // Discrepancy in the document between the main dish for Lunch
    // Menu for Lunch says Salad, while sample output gives Sandwich as main dish
    // Chose Salad and remained constant throughout Code
    main_dish = "Salad";
    side_dish = "Chips";
    drink = "Soda";
}

void Lunch::getOutput(){
    // Different Outputs Depending on Missing Dishes or More Dishes in Order

    // If either Main or Side or both Dishes are Missing
    if(count1 == 0 || count2 == 0)
    {
        if(count1 == 0 && count2 == 0)
            std::cout << "Unable to process: Main is missing, side is missing" << std::endl;
        else if(count1 == 0)
            std::cout << "Unable to process: Main is missing" << std::endl;
        else
            std::cout << "Unable to process: Side is missing" << std::endl;
    }

    // If either Main or Drink or both are asked more than once
    else if(count1 > 1 || count3 > 1)
    {
        if(count1 > 1 && count2 > 1)
            std::cout << "Unable to process: Salad and Soda cannot be ordered more than once" << std::endl;
        if(count1 > 1)
            std::cout << "Unable to process: Salad cannot be ordered more than once" << std::endl;
        else
            std::cout << "Unable to process: Soda cannot be ordered more than once" << std::endl;
    }

    // If Side is ordered more than once
    else if(count2 > 1)
    {
        if(count3 > 0)
            std::cout << main_dish<< ", "<< side_dish << "(" << count2 << ")" << ", " << drink << std::endl;
        else
            std::cout << main_dish<< ", "<< side_dish << "(" << count2 << ")" << ", " << drink2 << std::endl;
    }


    // If everything is correct or if Drink is omitted
    else if(count1 == 1 && count2 == 1)
    {
        if(count3 == 1)
            std::cout << main_dish<< ", "<< side_dish << ", " << drink << std::endl;
        else
            std::cout << main_dish<< ", "<< side_dish << ", " << drink2 << std::endl;
    }
    // More Cases can be added here tackling negative numbers for either of the three dishes
}