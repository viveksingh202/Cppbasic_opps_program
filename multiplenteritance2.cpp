#include <iostream>
using namespace std;

class Cricketer {
public:
    int runs;
    int wickets;
    float average;
};

class Engineer {
public:
    int experience;
    string domain;
};

class Phodu : public Engineer,  public Cricketer { // multiple inheritance
public:
    void display() {
        cout << "Cricketer Stats:" << endl;
        cout << "Runs: " << runs << endl;
        cout << "Wickets: " << wickets << endl;
        cout << "Average: " << average << endl;
        cout << "Engineer Stats:" << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Domain: " << domain << endl;
    }
};

int main() {
    Phodu p;
    p.runs = 1600;
    p.wickets = 60;
    p.average = 74.6;
    p.experience = 4;
    p.domain = "AI/ML";

    p.display(); // Display the stats
    return 0;
}
