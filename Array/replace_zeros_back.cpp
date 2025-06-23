#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1};
    int n = v.size();
    int j = -1;
    for(int i=0; i <n; i++){
        if (v[i] == 0){
            j=i;
            break;
        }
    }
    for(int i = j+1; i <n; i++){
        if (v[i] != 0){
            swap(v[i], v[j]);
            j++;
        }
    }
    for (auto i : v){
        cout << i << " ";
    }
    // time complexcity for this is O(n)
}