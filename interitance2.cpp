#include<iostream>
using namespace std;
class Vehicle{ // parent class
public:
    int topspeed;
    string fuel;
    float mileage;
};
class Bike : public Vehicle{ // child class 
public:
    int gear;

};
class Car : public Vehicle{  // child class 
public:

};
class Truck : public Vehicle{ 
public:

};
int main(){
    Bike b1;
    b1.topspeed = 60;
    b1.mileage = 50;
    b1.fuel = "petrol";
    b1.gear = 4; // Initialize 
}