#include <bits/stdc++.h>
using namespace std;
int main() {
    //  find the most frequent element in array, 
    // the element that occurs the maximum number of times. 
    // If there are multiple elements that appear a maximum number of times,
    // find the smallest of them.


    vector<int> v = {1, 2, 2, 3, 3, 3,2};
    unordered_map<int, int> m;
    for (auto i : v){
        m[i]++;
    }
    float max = -1;
    float min = numeric_limits<int>::max();
    for (auto i : m){
        if (i.second > max){
            max = i.second;
        }
    }
    for (auto i : m){
        if (i.first < min && i.second == max){
            min = i.first;
        }
    }
    cout << min;
    return 0;
}