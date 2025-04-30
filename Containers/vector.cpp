#include<bits/stdc++.h>
using namespace std;

void explainvectors(){

    // declaration and iteration of vector 
    vector<int> v;

    v.push_back(1); 
    v.emplace_back(2); // emplace is generally faster than push_back
    
    for(int i=3; i<=6; i++){
        v.emplace_back(i);
    }

    vector<pair<int,int>> v1;

    v1.push_back({1,2}); // need to pass with { }
    v1.emplace_back(1,2); // passes as a pair only 

    vector<int> v2(5); // vector now has size of 5 and each element is 0 
    // can be assume as {0,0,0,0,0}
    // now even after declaring the size it can increase its size 

    vector<int> v3(5,20); // vector v3 has size 5 with each element is 20 
    // {20,20,20,20,20}

    vector<int>:: iterator it = v.begin();
    it++;
    cout << *(it) << " " << endl;

    vector<int> :: iterator ik = v.begin();
    for(int i=0; i < v.size(); i++){
        cout << *(ik) << " ";
        ik++;
    }

    vector<int> :: iterator k = v.end();
    k--;
    cout << *(k) << endl;

    vector<int> :: reverse_iterator i = v.rend();
    i--;
    cout << *(i) << endl;

    vector<int> :: reverse_iterator l = v.rbegin();
    i++;
    cout << *(l) << endl;

    cout << v[0] << " " << v.at(0) << " " << v.back() << endl;

    for(vector<int> :: iterator k = v.begin(); k != v.end(); k++){
        cout << *(k) << endl;
    }

    for (auto k = v.end() - 1; k != v.begin(); k--){ // auto automatically defines the type of data 
        cout << *(k) << endl;
    }

    for(auto i : v){
        cout << i << " ";
    }
}

int main(){
    explainvectors();
}