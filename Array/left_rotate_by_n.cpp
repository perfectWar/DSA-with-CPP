#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int n = v.size();
    int k = 3;
    k = k%n;
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());
    reverse(v.begin(),v.end());

    for(auto i : v){
        cout << i << " ";
    }

}