#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> student;
    student[1] = "Mitali"; // 1 is the key and mitali is the value of the key 
    // key is similar to set which is unique and sorted 
    student.emplace(2,"Happy");
    student.insert({3,"Sneha"});

    for(auto i : student){
        cout << i.first << " " << i.second << endl;
    }

    cout << student[2] << endl;
    cout << student[4] << endl; // doesn't exist so the key will inserted and the value will be ""

    auto it = student.find(1);
    cout << it->second << endl;

    auto it1 = student.upper_bound(2); // greater than 2 so it point to key 3 which value is Sneha
    cout << it1->second << endl;
    
    auto it2 = student.lower_bound(2); // greater than or equal to 2 so it point to key 2 which value is Happy
    cout << it2->second << endl;

    // map is the container which store as key and value pairs. 
    // the keys are unique and in sorted manner.
    // multimap wich is similar to map but can store the duplicates keys and in sorted manner 
    // unordered map which is similar to map but doesn't store in sorted manner 
}