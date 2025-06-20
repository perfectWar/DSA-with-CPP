#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for (int i= 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    // time complexity for the sorting is O(n^2) for the worst case and the average case
    // for the best case its O(n)
    int arr[] = {2,1,5,3,0,8,13,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
}