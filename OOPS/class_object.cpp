#include<bits/stdc++.h>
using namespace std;
// Access modifiers 
// by default class is in private mode 
/*  private data and methods accessible inside class
public data and methods accessible to everyone
protected data and methods accessible inside class and to its derived class 
*/
class teacher{
    // properties
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    //methods / member function
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter 
    void setsalary(double s){
        salary = s;
    }

    // getter
    double getsalary(){
        return salary;
    }
};
int main(){
    teacher t1; //object 
    teacher t2; 
    t1.name = "Mitali";
    t1.dept = "AI/ML";
    t1.subject = "C++";
    t1.setsalary(25000);
    cout << t1.getsalary() << endl;
    cout << t1.name << endl;

}