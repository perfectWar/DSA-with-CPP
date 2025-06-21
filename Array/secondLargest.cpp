#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,3,2,5,5,2};
    int large = 1;
    int second_largest = -1;
    for (int i=0; i<7; i++){
        if (arr[i] > large){
            second_largest = large;
            large = arr[i];
        }
    }
    cout << second_largest;
}