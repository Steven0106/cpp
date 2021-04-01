#include <iostream>
#include <string>
#include "Car.h"
#import jsh
using namespace std;

void Car::set_power()
{
    power = !power;
    return;
}
void Car::set_speed(bool a)
{
    if (!power)return;
    if (a)
        speed += 0.1;
    else
        speed -= 0.1;
    return;
}
double Car::get_speed() const
{
    return speed;
}
