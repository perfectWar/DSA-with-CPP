#include<iostream>
using namespace std;

void doSomething(string &s){
    s[0] = 'T'; 
    cout << s << endl;
} 
// The '&' is used to received the address of the actual value by array always passed by references 

void array(int arr[], int n){
    arr[0] += 100;
    cout << "The value of arr[0] inside the function is : " << arr[0] << endl;
}
int main(){
    string s = "Raj";
    doSomething(s); // output will be Taj
    cout << s << endl; // output will be Taj
    /* This is called as pass by reference where the actual value's address is sent to the function and 
    modified the actual value itself */
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Enter the value : ";
        cin >> arr[i];
    }
    array(arr, n);
    cout << "The value of arr[0] inside int main function is " << arr[0] << endl;

    /* the value of arr[0] will be same inside the function 'array' and inside the function int main
    even if the symbol '&' is not used because the array always passed as reference */   
    return 0;
}