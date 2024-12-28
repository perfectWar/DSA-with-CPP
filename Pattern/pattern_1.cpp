#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i < n; i++){
        for(int j= 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    /*Rules for the pattern printing 
    1. the outer loop, count the number of lines 
    2. the inner loop, focus on the columns and connect them somehow to the rows
    3. print inside the inner loop
    4. observe symmetry (optional)*/
    /*Pattern 1 
    * * * * 
    * * * * 
    * * * * 
    * * * *
    */
    int n;
    cout << "Enter the number you want to print the pattern : ";
    cin >> n;
    pattern1(n);
}