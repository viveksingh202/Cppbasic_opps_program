#include<iostream>
using namespace std;
class Student{ // user defined datatype
    public:
    string name;
    int roln;
    float cgpa;
};
void print(Student s){
    cout<<s.name<<" "<<s.roln<<" "<<s.cgpa<<endl;
}
void change(Student s){
    s.name="vaishnavi";
}
int main(){
    Student s1;
    s1.name="anupriya";
    s1.roln=202;
    s1.cgpa=9.6;
    Student s2;
    s2.name="muskan";
    s2.roln=201;
    s2.cgpa=9.2;
    //change(s1); // pass by value
    print(s1);
    print(s2);

   //cout<<s1.name<<" "<<s1.roln<<" "<<s1.cgpa<<endl;
    //cout<<s2.name<<" "<<s2.roln<<" "<<s2.cgpa<<endl;


}