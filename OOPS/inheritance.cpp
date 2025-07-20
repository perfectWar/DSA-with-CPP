#include<bits/stdc++.h>
using namespace std;

/*
when properties and member functions of base class are passed on to the derived class
*/

/*
Mode of inheritance 
           | Derived class | Derived class  | Derived class |
-------------------------------------------------------------
Base class | Private Mode  | Protected Mode | Public Mode   |
-------------------------------------------------------------
Private    | Not Inherited | Not Inherited  | Not Inherited |
-------------------------------------------------------------
Protected  | Private       | Protected      | Protected     |
-------------------------------------------------------------
Public     | Private       | Protected      | Public        |
*/

// single inheritance 
class person{
    public:
    string name;
    int age;

    //constructor 
    // called first of parent class
    person(){
        cout << "I am parent class constructer and I run first " << endl;
    }

    person(string name, int age){
        this->name = name;
        this->age = age;
    }

    //destructor
    // called after child class
    ~person(){
        cout << "Bye I have deleted everything of parent class" << endl;
    }
};

class student : public person{
    public:
    int rollno;

    // constructor 
    // called after parent class
    student(){
        cout << "I am the child class constructor and I run after parent class constructor " << endl;
    }

    student(string name, int age, int rollno) : person(name, age){
        this->rollno = rollno;
    }

    // destructor 
    // called first of child class
    ~student(){
        cout << "Bye I have deleted everything of child class" << endl;
    }
    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};
int main(){
    student s1("Mitali", 21, 22);
    s1.getInfo();
}