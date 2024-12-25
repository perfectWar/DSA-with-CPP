#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++ ){
        cout << i << endl;
    } // here the scope of the i is into the loop only 

    int i = 0;
    while(i <= 5){
        cout << i << endl;
        i++;
    } // here the scope of the i is not into the while loop 

    do{
        cout << i << endl;
        i++;
    }while(i<=5); // the do condition will run for the first time even if not statisfy the condition of while loop
    return 0;
}