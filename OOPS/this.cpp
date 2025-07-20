#include<bits/stdc++.h>
using namespace std;

/*
"this" is a special pointer in c++ that points to the current object
this->property is same as *(this).property
*/
class Try{
    public:
    string name;
    int age;
    Try(string name, int age){
        // left with this is object 
        // right one is constructor parameter 
        this->name = name;
        this->age = age;
    }
};
int main(){

}