#include <iostream>
using namespace std;
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
    for(int i=0; i < 4; i++){
        for(int j= 0; j <4; j++){
            cout << "* ";
        }
        cout << endl;
    }
}