#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> m; 
    m.insert(4);
    m.insert(4);
    m.insert(4);
    cout << m.size() << endl; // output : 3

    set<int> s = {1,1,1};
    cout << s.size() << endl; // output : 1

    auto it = m.find(4);
    auto it2 = m.find(4);
    m.erase(it, it2);
    cout << m.size(); 

    // the only difference between multiset and set is that set follows the rules of uniqueness and sorted 
    // whereas multiset follows the rule of sorted not uniqueness 
}