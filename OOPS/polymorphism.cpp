#include<bits/stdc++.h>
using namespace std;

/*
polymorphism is the ability of objects to take on different 
forms or behave in different ways depending on the context
in which they are used 

compile time polymorphism 
run time polymorphism 
*/

class student{
  public:  
  string name;
  
  student(){
    cout << "Hey, I am constructor" << endl;
  }

  student(string name){
    cout << "Hey " << name << endl;
  }
};

class print{
    public:
    void show(int x){
        cout << "Int : " << x << endl;
    }

    void show(char ch){
        cout << "Char : " << ch << endl;
    }
};

// run time polymorphism 
/*
parent and child both contain the same function with different 
implementation. the parent class function is said to be overridden.

function orverride 
when parent class and child class has same function and runs when respective 

virtual functions 
is a member funstion that you expect to be redefined in derived classes 
are dynamic in nature 
defined by the keyword "virtual" inside a base class and are always declared with a base
class and override in a child class
a virtual function is called during Runtime
*/

class Parent {
    public:
    void getInfo(){
        cout << "Parent class " << endl;
    }

    virtual void hello(){
        cout << "hello from parent class " << endl;
    }
};

class child : public Parent{
    public:
    void getInfo(){
        cout << "Child class "<< endl;
    }

    void hello(){
        cout << "hello from child" << endl;
    }
};

int main(){
    // compiler time 
    // statically 
    //  function overloading 
    //  same name of function in same class but different parameters 
    student s; // Non parameterized constructor called 
    student s1("Mitali"); // parameterized constructor 
    print p;
    p.show('B'); // parameter with char will called 
    p.show(2); // parameter with int will called 

    Parent p1;
    p1.getInfo();

    child c;
    c.getInfo();

    p1.hello();    
}