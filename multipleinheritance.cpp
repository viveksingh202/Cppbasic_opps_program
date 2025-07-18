#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    float average;
};
class Engineer{
public:
    int experience;
    string domain;
};
class Phodu : public Cricketer, Engineer{
public:

};
int main(){
    Phodu p;
    p.runs=1600;
    p.wickets=60;
    p.average=74.6;
    p.experience=4;
    p.domain="aiml";

}