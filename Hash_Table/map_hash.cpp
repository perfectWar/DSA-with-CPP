#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in map : ";
    cin >> n;
    int arr[n];
    // map<int, int> app;
    unordered_map<int, int> app;

    for (int i=0; i<n; i++){
        cin >> arr[i];
        app[arr[i]]++;
    } 

    int q;
    cout <<"Size of the map is : " <<app.size() << endl;
    cout << "No. of Query : ";
    cin >> q;
    while(q--){
        int x;
        cout << "Enter the number you want to search :- ";
        cin >> x;
        cout << "The number of occurence of given number is : "<<app[x] << endl;
    }  
    cout << "ELements of the map are :- "<< endl;
    for( auto i : app){
        cout << i.first <<  " -> " << i.second << endl;
    }

    // storing and fetching in map takes O(log(n)) times in all cases
    // we can use unordered map which takes O(1) in all the cases for the storing
    // and in fetching it takes O(n)

    // in map the key can be of any data type even a pair or anything
    // but in unordered map key can only be indivisual data type
}  