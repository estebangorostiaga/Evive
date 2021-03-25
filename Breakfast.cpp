#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Breakfast.h"
using namespace std;

Breakfast::Breakfast( ) {
    main_dish = "Eggs";
    side_dish = "Toast";
    drink = "Coffee";
}

void Breakfast::getOutput(){
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

    // If either Main or Side or both are asked more than once
    else if(count1 > 1 || count2 > 1)
    {
        if(count1 > 1 && count2 > 1)
            std::cout << "Unable to process: Eggs and Toast cannot be ordered more than once" << std::endl;
        if(count1 > 1)
            std::cout << "Unable to process: Eggs cannot be ordered more than once" << std::endl;
        else
            std::cout << "Unable to process: Toast cannot be ordered more than once" << std::endl;
    }

    // If Drink is ordered more than once
    else if(count3 > 1)
        std::cout << main_dish<< ", "<< side_dish << ", " << drink << "(" << count3 << ")"<< std::endl;

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