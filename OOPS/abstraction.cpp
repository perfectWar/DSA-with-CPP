#include<bits/stdc++.h>
using namespace std;

/*
Abstraction 
hiding all unnecessary details and showing only the important parts

abstract classes are used to provide a base class from which other classes can be derived
they cannot be instantiated (no object created) and are meant to be inherited.
abstract classes are typically used to define an interface for derived classes.
*/

class shape{ // abstaract class 
    virtual void draw() = 0; //pure virtual function
};

class circle : public shape{
    public:
    void draw() {
        cout << "Circle" << endl;
    }
};

int main(){
    circle c;
    c.draw();
}