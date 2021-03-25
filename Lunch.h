#ifndef LUNCH_H_
#define LUNCH_H_
#include "Meal.h"

class Lunch : public Meal
{ 
public:
    Lunch();
    virtual void getOutput();
};
#endif 