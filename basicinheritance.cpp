#include<iostream>
#include<string>
using namespace std;

class Criketer {
public:
    int runs;
    int wicket;
    float avg;
};

class Engineer {
public:
    int experience;
    string domain;
};

class Genius : public Criketer, public Engineer {
public:
    string name;
};

int main() {
    Genius g1;
    g1.name = "Anupriya";
    g1.runs = 1200;
    g1.wicket = 6;
    g1.avg = 78.4;
    g1.experience = 2;
    g1.domain = "AIML";

    // Output the data
    cout << "Name: " << g1.name << endl;
    cout << "Runs: " << g1.runs << endl;
    cout << "Wickets: " << g1.wicket << endl;
    cout << "Average: " << g1.avg << endl;
    cout << "Experience: " << g1.experience << " years" << endl;
    cout << "Domain: " << g1.domain << endl;

    return 0;
}
