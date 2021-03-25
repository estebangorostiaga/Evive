#ifndef DINNER_H_
#define DINNER_H_
#include "Meal.h"

class Dinner : public Meal { 
public:
    Dinner();
    virtual void getOutput();
    std::string dessert;         // Initializes a Dessert for Dinner only
};
#endif 