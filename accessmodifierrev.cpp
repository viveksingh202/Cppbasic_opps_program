#include<iostream>
using namespace std;
class Student{
public:
    string name;
    float marks;
    Student(string n,float m, int r){
        name=n;
        marks=m;
        roln=r;
    }
    void print(){
        cout<<name<<" "<<marks<<" "<<roln<<endl;
    }
   int getroln(){ // getter
    return roln;
   }
   void setroln(int r){ // setter
        roln=r;
   }
private:
    int roln;
    
    
};
int main(){
        Student s1("vivek",90.4,202);
        cout<<s1.getroln()<<endl;
        s1.setroln(200);
        cout<<"after updation: "<<s1.getroln();
}