#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> uset;

    uset.insert(10);
    uset.insert(20);
    uset.insert(10);  // Duplicate, won't be added

    for (int val : uset) {
        cout << val << " ";
    }

    cout << endl;

    uset.insert(3);         // Add x
    cout << uset.erase(10) << endl;          // Remove x
    uset.find(20);           // Returns iterator to x or uset.end()
    cout << uset.count(3) << endl;          // 1 if x is present, else 0
    cout << uset.size() << endl;            // Number of elements
    cout << uset.empty() << endl;           // true if empty

}