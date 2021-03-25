#ifndef BREAKFAST_H_
#define BREAKFAST_H_
#include "Meal.h"

class Breakfast : public Meal { 
public:
    Breakfast();
    virtual void getOutput();
};
#endif 