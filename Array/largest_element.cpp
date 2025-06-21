#include<bits/stdc++.h>
using namespace std;
int arr[6]; // store 0 at all place and is a global array and max size is 10^7
int main(){
    // a data structure of similar elements is known to be array
    int arr1[6]; // store garbage values and max size is 10^6
    for (int i=0; i < 6; i++){
        cin >> arr1[i];
    }
    int large = arr1[0];
    for (int i=0; i < 6; i++){
        if (arr1[i] > large){
            large = arr1[i];
        }
    }
    cout << large;
}