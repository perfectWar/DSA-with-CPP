#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for (int i = n-1; i >= 1; i-- ){
        int flag = 0;
        for (int j=0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
    for (int i=0; i <n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    // bubble sort check the first two element and if first is bigger than second it swap
    // and after first iteration the biggest element will be in write place
    // time complexity for this is O(N^2) for worst and average case 
    // and O(N) for the best case
    int arr[] = {13, 24, 46, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
}