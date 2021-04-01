#include <iostream>
#include "Car.h"

using namespace std;

int main(void)
{
    Car car1("액센트");
    Car car2("아반테");
    Car car3("소나타");
    Car car4("그랜져");
    car1.set_power();
    car1.set_speed(true);
    cout << car1.get_speed() << endl;
    car2.set_power();
    car2.set_speed(true);
    return 0; // desturctors are automatically called upon termination of the main function, unless created on the heap. 
}