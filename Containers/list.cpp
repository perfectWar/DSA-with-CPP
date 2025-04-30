#include<bits/stdc++.h>
using namespace std;

void mylist(){
    // similar to vector, can store multiple elements of the same type and dynamically grow in size.
    list<int> ls;
    ls.push_back(3);
    ls.emplace_back(4);
    for(auto l : ls){
        cout << l << endl;
    }
    // cout << ls[0]; not possible in list unlike vector 
    // all the function of vector is same as list 
}
int main(){
    mylist();
}