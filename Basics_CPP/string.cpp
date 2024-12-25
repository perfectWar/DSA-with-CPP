#include <iostream>
using namespace std;
int main(){
    string n; // take the word before the space only 
    // example input : word letter
    cin >> n;
    // output : word 
    cout << n;

    // printing the last letter of the word 
    cout << endl << n[n.size() - 1];
    return 0;
}