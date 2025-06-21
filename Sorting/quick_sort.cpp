#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low +1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(vector<int> &app, int low, int high){
        if(low<high){
            int pIndex = partition(app, low, high); 
            quick_sort(app, low, pIndex-1);
            quick_sort(app, pIndex+1, high);
        }
}
int main(){
    vector<int> v = {7,4,3,8,2,6,9};
    quick_sort(v,0,v.size());
    for (auto i: v){
        cout << i << " ";
    }
    // time complexity for this is O(nlogn)
} 