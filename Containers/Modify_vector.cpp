#include<bits/stdc++.h>
using namespace std;

void print(auto v){
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
}

void modify(){
    vector<int> v;
    for(int i= 0; i <= 9; i++ ){
        v.emplace_back(i);
    }

    print(v);

    v.erase(v.begin()+2);
    print(v);

    v.erase(v.begin()+2, v.begin()+6);
    print(v);

    v.insert(v.begin(), 5);
    print(v);

    v.insert(v.begin()+1,2,10);
    print(v);

    vector<int> copy(3,50);
    v.insert(v.begin(), copy.begin(), copy.end());
    print(v);

    v.swap(copy); 
    print(v);
    print(copy);

    copy.pop_back();

    v.clear();
    print(v);

    cout << v.empty();
    cout << copy.empty();
}

int main(){
    modify();
}