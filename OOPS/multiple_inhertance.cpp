#include<bits/stdc++.h>
using namespace std;

/*
when two parent class has one same child 
*/
class student {
    public:
    string name;
    int rollno;   
};

class teacher{
    public:
    double salary;
    string dept;
};

class TA : public student, public teacher{

};
int main(){
    TA t;
    t.name = "Jaya";
    t.salary = 25000;
    t.dept = "Computer Science";

    cout << t.name << " " << t.salary << " " << t.dept  << endl;
}