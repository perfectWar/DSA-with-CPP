#include<bits/stdc++.h>
using namespace std;
int main(){
    // array is sorted  
    int arr[8] = {1,1,2,2,2,2,3,3};
    int i = 0;
    for (int j = 1; j < 8; j++){
        if (arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for (int j= 0; j < i+1; j++){
        cout << arr[j] << " ";
    }
}