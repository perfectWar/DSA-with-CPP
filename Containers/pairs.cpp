#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int, int> p1 = {1,2};
    cout << p1.first << " " << p1.second; // ouput 1 2

    pair<int, pair<int, int>> p = {1, {2,3}};
    cout << p.first << " " << p.second.second << " " << p.second.first; // output 1 3 2

    pair<int, pair <int, pair<int, int>>> q = {1, {2, {3,4}}};
    cout << q.second.second.second << " " << q.second.first; // output 4 2 

    pair<int, int> arr[] = {{1,2} , {3,4} , {5,6}};
}
int main(){
    pairs();
}