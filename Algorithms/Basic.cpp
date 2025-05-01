#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
}

void print_array(int a[]){
    for(int i =0; i<4; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second > p2.second) return false;
    if (p1.second < p2.second) return true;
    if (p1.first > p2.first) return true;
    return false;
}

void print_pair(pair<int, int> a[], int n){
    for(int i=0; i< n; i++ ){
        cout << "{" << a[i].first << "," << a[i].second << "}" << " "; 
    }
    cout << endl;
}
int main(){
    //sorting of array
    int a[4] = {3,2,1,4};
    sort(a, a + 4);
    print_array(a);

    // sorting of vector 
    vector<int> v = {2,6,3,9,1};
    sort(v.begin(), v.end());
    print(v);

    // sorting in descending order 
    sort(a, a+4, greater<int>());
    print_array(a);
    sort(v.begin(), v.end(), greater<int>());
    print(v);

    // creating my rule
    // sorting of pair 
    // sort it acc. to second element and 
    // if second element same then sort it to first element but in descending order.
    
    pair<int, int> b[] = { {1,2}, {2,1}, {4,1}};
    print_pair(b,3);
    sort(b, b+3, comp);
    print_pair(b,3);

    // __builtin_popcount count the number of one's in binary 
    int num = 7;
    int c = __builtin_popcount(num);
    cout << c << endl; // output 3

    int n = 6;
    int cn = __builtin_popcount(n);
    cout << cn << endl; // output 2

    long long nm = 928396399478713989;
    int cun = __builtin_popcountll(nm);
    cout << cun << endl;


    // next_permutation
    string s = "312";

    do{
        cout << s << " ";
    }while(next_permutation(s.begin(), s.end()));

    // maximum element 
    int max = *max_element(a,a+4);
    cout << max << endl;
}