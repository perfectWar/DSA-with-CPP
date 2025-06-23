#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,1,3,4,5,5};
    vector<int> v1 = {2,4,4,5,6};
    int i = 0;
    int j = 0;
    int n1 = v.size();
    int n2 = v1.size();
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if (v[i] <= v1[j]){
            if (unionArr.size()==0||unionArr.back() != v[i]){
                unionArr.push_back(v[i]);
            }
            i++;
        }
        else{
            if (unionArr.size()==0||unionArr.back() != v1[j]){
                unionArr.push_back(v1[j]);
            }
            j++;
        }
    }
    while(j <n2){
        if (unionArr.size()==0||unionArr.back() != v1[j]){
            unionArr.push_back(v1[j]);
        }
        j++;
    }
    while (i <n1){
        if (unionArr.size()==0||unionArr.back() != v[i]){
            unionArr.push_back(v[i]);
        }
        i++;
    }
    for (auto k : unionArr){
        cout << k << " ";
    }
}