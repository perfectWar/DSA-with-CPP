#include<bits/stdc++.h>
using namespace std;

/*
Special method invoked automatically at time of object creation. Used for Initialization
same name as class
doesn't have return type 
only called once (automatically), at object creation
memory allocation happens when constructor is called 
either compiler create a constructor or we create a contructor 
*/

/*
Types of constructor 
non parameterized - no parameters 
parameterized - one or more parameters
copy constructor  default used to copy properties of one object into another
*/
class Try{
    public:
    Try(){
        cout << "Hi, I am a contructor called automatically once object is created" << endl;
    }
};
class student{
    public:
    string name;
    string batch;
    int roll;
    student(){
        cout << "Hi, I am a constructor of student and run if I am not override by my other mate" << endl;
    }
    student(string n, string c, int roll_number){
        name = n;
        batch = c;
        roll = roll_number;
    }

    void getinfo(){
        cout << name << " " << batch << " " << roll << endl;
    }

    //copy constructor
    student(student &obj){
        cout << "I am custom copy constructor" << endl;
        this->name = obj.name;
        this->batch = obj.batch;
        this->roll = obj.roll;

    }
};
int main(){
    Try t;
    student t2;
    student t1("Mitali", "3rd year", 22);
    student t3(t1);
    t3.getinfo(); // default constructor call is not built 
    // and we can create our own copy constructor 
}