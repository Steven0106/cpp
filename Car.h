//#include <iostream>
//#include <string>
using namespace std;
class Car {
    const string model;
    bool power;
    double speed;
public:
    Car(string m, bool p = false, double s = 0.0) :model(m), power(p), speed(s) {};
    void set_power();
    void set_speed(bool);
    double get_speed() const;
    ~Car() {};
};