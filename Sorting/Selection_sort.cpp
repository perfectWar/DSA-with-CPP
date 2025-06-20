#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    // selection sort finds the minimum element in array and swap the number
    // time complexity for this sorting method is O(n^2) which is the best case, worst case and average case
    int arr[] = {9,5,3,8,2,4,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
}