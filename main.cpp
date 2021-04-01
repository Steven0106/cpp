#include <iostream>
#include "Car.h"

using namespace std;

int main(void)
{
    Car car1("Regera");
    Car car2("Agera");
    Car car3("Gemera");
    Car car4("CCXRjsh");
    car1.set_power();
    car1.set_speed(true);
    cout << car1.get_speed() << endl;
    car2.set_power();
    car2.set_speed(true);
    return 0; // desturctors are automatically called upon termination of the main function, unless created on the heap. 
}
