#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the marks : ";
    cin >> num;
    if (num < 25){
        cout << "Grade is F";
    }
    else if (num > 25 && num <= 44){
        cout << "Grade is E";
    }
    else if (num >= 45 && num <= 49){
        cout << "Grade is D";
    }
    else if (num >= 50 && num <= 59){
        cout << "Grade is C";
    }
    else if (num >= 60 && num <= 79){
        cout << "Grade is B";
    }
    else if (num >= 80 && num <= 100) {
        cout << "Grade is A";
    }
    else{
        cout << "Invalid Marks";
    }
}