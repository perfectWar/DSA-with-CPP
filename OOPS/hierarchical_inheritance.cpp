#include<bits/stdc++.h>
using namespace std;

/*
when a parent class has 2 or more child class 
*/

class person{
    public:
    string name;
    int age;
};

class teacher : public person{
    public:
    double salary;
};

class student : public person{
    public:
    int rollno;
};
int main(){
    student s1;
    s1.name = "Jaya";
    s1.age = 12;
    s1.rollno = 9;

    teacher t;
    t.name = "Mitali";
    t.age = 21;
    t.salary = 25000;
    
}