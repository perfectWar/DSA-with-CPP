#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,4,5};
    int flag = 0;
    for (int i = 1; i < 4; i++){
        if (arr[i-1] > arr[i]){
            cout << "Not sorted";
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << "Sorted";
    }
}