#include <iostream>
using namespace std;

class Scooty {
public:
    int topspeed;
    float mileage;
    string fuel;
private:
    int bootspace;
};

class Bike : public Scooty {
public: // Make gear public if you want to access it directly
    int gear;
};

void display(Bike b) {
    cout << "Top Speed: " << b.topspeed << " km/h" << endl;
    cout << "Mileage: " << b.mileage << " km/l" << endl;
    cout << "Fuel: " << b.fuel << endl;
    cout << "Gear: " << b.gear << endl; // Display gear
}

int main() {
    Bike b1;
    b1.topspeed = 60;
    b1.mileage = 50;
    b1.fuel = "petrol";
    b1.gear = 4; // Initialize gear
    display(b1);
}
