#include<iostream>
using namespace std;
// function are used to increased the readability, can use same code multiply times, modularise code.
/* Types of functions are :
void function which do not return anything 
return function which return something 
parameterised 
non parameterised */
void printName(){
    cout << "Hey Mitali" << endl;
}
void Name(string name){
    cout << "Hey " << name << endl;
}

int sum(int a, int b){
    return a+b;
} // return function which return the value of sum of given two numbers 
int main(){
    string name;
    cout << "Enter your name : ";
    cin >> name;
    printName(); // void function with no parameter 
    Name(name); // void function with a parameter named as name  

    // take two number and print its sum
    int x,y;
    cout << "Enter any two number : ";
    cin >> x >> y;
    cout << "The sum of the numbers are : " << sum(x,y); //print the sum of x and y 
    return 0;
}