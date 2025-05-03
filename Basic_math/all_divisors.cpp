#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // time complexity for this is O(n)
    for (int i = 1; i <= n; i++){
        if(n%i==0) cout << i << " ";
    }
    // for reducing time complexity we can do this 
    vector<int> v;
    for (int i = 1; i*i <= n; i++){
        if(n%i==0) {
           v.emplace_back(i);
           if(n/i != i){
            v.emplace_back(n/i);
           }
        }
    }
    sort(v.begin(), v.end());
    for (auto it : v){
        cout << it << " ";
    }
}