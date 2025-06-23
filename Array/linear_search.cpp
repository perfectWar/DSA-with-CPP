#include<bits./stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8};
    int n = v.size();
    int k;
    cin >> k;
    int flag = 0;
    for (int i =0; i < n; i++){
        if (v[i] == k){
            cout << "Found at index " << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << "Not Found";
    }

}