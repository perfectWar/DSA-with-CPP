#include<bits/stdc++.h>
using namespace std;

// A shallow copy of an object copies all of the member values from one object to another
class student{
    public:
    // static memory 
    string name;
    double cgpa;

    student(string name, double cgpa){
        this->name = name; // shallow copies no problem 
        this->cgpa = cgpa;
    }

    student(student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << cgpa << endl; 
    }
};

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
        this->cgpa = obj.cgpa; // copies the pointer address, not the value
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
    *(s2.cgpa) = 9.2; 
    s1.getInfo(); // after changing in s2 object the s1 will also change 
}