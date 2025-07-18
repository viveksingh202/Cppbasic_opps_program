#include<iostream>
using namespace std;
class Vehicle{ // parent class
public:
    int topspeed;
    string fuel;
    int  mileage;
};
class Twowheeler : public Vehicle{ // child class / derived class
public:
    int wheel;

};
class Scooty : public Twowheeler{  // child class / derived class 
public:

};
class Bike : public Twowheeler{ 
public:

};
int main(){
    Bike b1;
    b1.topspeed = 60;
    b1.mileage = 50;
    b1.fuel = "petrol";
    b1.wheel=4;
    

}