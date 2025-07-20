#include<bits/stdc++.h>
using namespace std;

/*
static keyword 

variable declared as static in a function are created and initialized once 
for the lifetime of the program // in function 

static variables in a class are created and initialized once. 
They are shared by all the objects of the class // in class

*/

void fun(){
    int x = 0;
    static int y = 0;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    x++;
    y++;
}


class A{
    public:
    int x;
    static int y;
    void incX() {
        x++;
        y++;
    }
};
int A::y = 0; 

class Try{
    public:
    Try(){
        cout << "I am constructor " << endl;
    }

    ~Try(){
        cout << "I am destructor " << endl;
    }
};

int main(){
    fun();
    fun();
    fun();

    A a;
    A b;
    a.x = 10;
    b.x = 20;
    a.y = 0;
    a.incX();
    b.incX();
    cout << a.x << " " << b.x << endl;
    cout << a.y << " " << b.y << endl;

    if (true){
        Try t;
    }

    cout << "Try object 1 end " << endl;

    if (true){
        static Try t2;
    }

    cout << "Try object 2 end " << endl;
}
