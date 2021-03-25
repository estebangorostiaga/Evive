#include <iostream>
#include "Dinner.h"

Dinner::Dinner( ) {
    main_dish = "Steak";
    side_dish = "Potatoes";
    drink = "Wine";
    dessert = "Cake";
}

void Dinner::getOutput(){
    // Different Outputs Depending on Missing Dishes or More Dishes in Order

    // If either Main, Side, Dessert or all 3 dishes are Missing
    if(count1 == 0 || count2 == 0 || count4 == 0)
    {
        std::cout << "Unable to process: "<< "";
        if(count1 == 0)
        {
            std::cout << "Main is missing" << "";
            if(count2 == 0) std::cout << ", side is missing" << "";
                if(count4 == 0) std::cout << ", dessert is missing" << "";
        }
        else if(count2 == 0)
        {
            std::cout << "Side is missing" << "";
            if(count4 == 0) std::cout << ", dessert is missing" << "";
        }
        else if(count4 == 0)
            std::cout << "Dessert is missing" << "";
        std::cout << std::endl;            
    }

    // Here we run under the assumption that no dishes at dinner can be ordered more than once, as it's not
    // specified in the document
    else if(count1 > 1 || count2 > 1 || count3 > 1 || count4 > 1)
    {
        std::cout << "Unable to process: "<< "";
        if(count1 > 1 ){ std::cout << "Steak cannot be ordered more than once" << "";
            if(count2 > 1)std::cout << ", potatoes cannot be ordered more than once" << "";
            if(count3 > 1)std::cout << ", wine cannot be ordered more than once" << "";
            if(count4 > 1)std::cout << ", cake cannot be ordered more than once" << "";}
        else if(count2 > 1){ std::cout << "Potatoes cannot be ordered more than once" << "";
            if(count3 > 1)std::cout << ", wine cannot be ordered more than once" << "";
            if(count4 > 1)std::cout << ", cake cannot be ordered more than once" << "";}
        else if(count3 > 1){std::cout << "Wine cannot be ordered more than once" << "";
            if(count4 > 1)std::cout << ", cake cannot be ordered more than once" << "";}
        else
            std::cout << "Cake cannot be ordered more than once" << "";
        std::cout << std::endl;
    }

    // If everything is correct or if Drink is omitted
    else if(count1 == 1 && count2 == 1 && count4 == 1)
    {
        if(count3 == 1)
            std::cout << main_dish<< ", "<< side_dish << ", " << drink << ", " << drink2 << ", " << dessert << std::endl;
        else
            std::cout << main_dish<< ", "<< side_dish << ", " << drink2 << ", " << dessert << std::endl;
    }
    // More Cases can be added here tackling negative numbers for either of the three dishes
}