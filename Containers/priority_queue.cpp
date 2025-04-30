#include<bits/stdc++.h>
using namespace std;

int main(){
    // max-heap
    priority_queue<int> pq;
    pq.push(2);
    pq.push(10);
    pq.push(4);
    pq.push(6);
    pq.push(9);
    pq.push(1);

    cout << pq.top() << endl; // largest element in the queue 
    pq.pop();

    //min-heap
    priority_queue<int, vector<int>, greater<int>> m;
    m.push(10);
    m.push(2);
    m.push(4);
    m.push(6);
    m.push(9);
    m.push(1);

    cout << m.top(); // smallest element in the queue

}