#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(2);
    s.insert(1);

    auto it = s.find(7);
    cout << *it << endl;

    cout << s.size() << endl;
    auto it1 = s.find(1);
    auto it2 = s.find(6);
    s.erase(it1,it2);
    cout << s.size() << endl;
}