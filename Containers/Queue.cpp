#include<bits/stdc++.h>
using namespace std;

void queues(){
    // cannot declare the queue at the time of declaration 
    queue<int> q;
    q.push(6);
    q.emplace(8);
    q.emplace(0);
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.empty() << endl;
    cout << q.size() << endl;
}
int main(){
    queues();
}