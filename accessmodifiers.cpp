#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roln;

    Student(string n, int r, float m){
        name=n;
        roln=r;
        marks=m;
    }
    void display(){
        cout<<name<<" "<<roln<<" "<<marks<<endl;
    }
    float getmarks(){ // Getter
        return marks;
    }
    void setmarks(float m){ // Setter
        marks=m;

    }
private:
    float marks;
};
int main(){
    Student s1("sakshi", 202, 86.5);
    /*s1.name="vivek";
    s1.roln=202;
    s1.marks=78;
    cout<<s1.name<<" "<<s1.roln<<" "<<s1.marks<<endl;
    */
   s1.display();
   cout<<s1.getmarks()<<endl;
   s1.setmarks(98.4);
   cout<<s1.getmarks()<<endl;
}