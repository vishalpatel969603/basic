#include<iostream>
using namespace std;
class Vehicle{ // parent classs
public:
    int topSpeed;
    float mileage;
    string fuel;
};
class Car : public Vehicle{ // child class / derived class
public:
    bool sunroof; 
};
class Bike : public Vehicle{ //child class / derived class
public:

};
class Truck : public Vehicle{ //child class / derived class
public:

};
int main(){
    Car b1;
     b1.topSpeed =180;
     b1.mileage = 12.5;
     b1.gears = 6;
}