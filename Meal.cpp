#include "Meal.h"

Meal::Meal( ) { }

void Meal::getDishes(std::string command){
    // Here we first split the command line variables and put each one into an array

    std::istringstream is(command);

    while (std::getline(is, token, ','))
    {
        if (!token.empty())
            tokens.push_back(token);
    }

    // Initializes Dishes and looks for any repeating Dishes on Order
    // Another method this could be done is using a count array (instead of 3 count variables), which would become useful for n amount of foods
    for (int i = 0; i < tokens.size(); ++i)
    {
        if(std::stoi(tokens[i]) == 1)
            count1 += 1;
        else if(std::stoi(tokens[i]) == 2)
            count2 += 1;
        else if(std::stoi(tokens[i]) == 3)
            count3 += 1;
        else
            count4 += 1;
    }
}

// This function is just used to make sure that the derived class's function is used
void Meal::getOutput(){
    std::cout << "Just a normal Meal" << std::endl;
}
