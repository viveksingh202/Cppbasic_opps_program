#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
};
void change(Car &c){
    c.name="Audi A8";
    c.price=240000;
}
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}
int main(){
    Car c1;
    c1.name="honda City";
    c1.price=150000;
    c1.seats=5;
    c1.type="Sedas";
    Car c2;
    c2.name="Maruti Suizki";
    c2.price=100000;
    c2.seats=8;
    c2.type="Sedas";
   // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<" "<<endl;
   print(c1);
   print(c2);
   change(c2);
   print(c2);
}