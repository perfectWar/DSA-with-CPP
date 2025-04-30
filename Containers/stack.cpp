#include <bits/stdc++.h>
using namespace std;

void stacks(){
    stack<int> st;
    st.push(5);
    st.push(9);
    cout << st.top(); // top element in the stack 
    st.pop();
    cout << endl;
    cout << st.top();
}
int main(){
    stacks();
}