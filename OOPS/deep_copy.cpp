#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    // dynamic memory 
    string name;
    double* cgpa;

    Student(string name, double c){
        this->name = name;
        cgpa = new double; 
        *cgpa = c;
    }

    Student(Student &obj){
        this->name = obj.name;
        cgpa = new double;
        *cgpa = *obj.cgpa; // copies the value not the address 
    }
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpa << endl; 
    }
};
int main(){
    Student s1("Mitali", 8.5);
    Student s2(s1);
    s1.getInfo(); 
    s2.getInfo(); 
    *(s2.cgpa) = 9.2; 
    s1.getInfo(); // now the cgpa won't be change 
    s2.getInfo(); 
}