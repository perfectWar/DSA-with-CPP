#include<iostream>
using namespace std;

void doSomething(int num){
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num); // the output will be 10 15 20  
    cout << num; // the output will be 10 
    /* this is called as pass by value where the copy of the original value is sent to the function 
    and modified the copied value */
    // the original value is stored somewhere in the memory 
    return 0;
}