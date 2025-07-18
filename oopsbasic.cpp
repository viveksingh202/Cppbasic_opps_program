#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roln;
    float cgpa;
};
void print(Student s){
    cout<<s.name<<" "<<s.roln<<" "<<s.cgpa<<" "<<endl;
}
int main(){
    Student s1;
    s1.name="vivek";
    s1.roln=202;
    s1.cgpa=9.2;
    Student s2;
    s2.name="sakshi";
    s2.roln=200;
    s2.cgpa=9.5;
    /*cout<<s1.name<<" "<<s1.roln<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.roln<<" "<<s2.cgpa;
    */
   print(s1);
   print(s2);
}