#include<bits/stdc++.h>
using namespace std;

// hashing is something which is something fetching and prestoring 
int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i<size; i++){
        cin >> arr[i];
    }

    //precompute
    int hash[13] = {0};
    for (int i=0; i<size; i++){
        hash[arr[i]] += 1;
    }
    int test; 
    cin >> test;
    while(test--){
        int num; 
        cin >> num;

        //fetch 
        cout << hash[num] << endl;
    }
    // inside the main the array  

    string s = "aabbcccdef";
    //pre computing 

     int hash2[26] = {0};
     for (int i= 0; i<s.size(); i++){
        hash2[s[i]-'a']++;
     }

     int q;
     cin >> q;
     while(q-- ){
         char c;
         cin >> c;

         // fetch
         cout << hash2[c - 'a'] << endl;
     }


    
}