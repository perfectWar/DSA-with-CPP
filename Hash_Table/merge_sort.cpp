#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left ++;
        }
        else {
            temp.push_back(arr[right]);
            right ++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left ++;
    }
    while (right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(vector<int> &arr, int low, int high){
    int mid = (low+high)/2;
    if (low >= high) return;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main(){
    vector<int> v = {2,6,4,3,1,9,3,5};
    mergeSort(v,0, v.size());

    for (auto i : v) cout << i << " ";
    // time complexity for this sort technique is O(n log(n))
    // which is for all the cases 
    // n is for the merge and log(n) of dividing 
    // space complexity for this is O(n) for every call it creates the temp vector
}