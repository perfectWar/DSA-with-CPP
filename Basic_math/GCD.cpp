#include<bits/stdc++.h>
using namespace std;

int main(){
    int gcd = 1;
    int a,b;
    cin >> a >> b;
    int m = min(a,b);
    // time complexity of this is O(min(a,b))
    for (int i=1; i < m; i++){
        if (a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    cout << gcd << endl;

    // now in another way 
    // time complexity of this is O((min(a,b))
    for (int i = m; i >= 1; i--){
        if(a%i ==0 && b%i == 0){
            cout << i << endl;
            break;
        }
    }

    // these can be done using euclidean algorithm
    // time complexity of this is O(log(min(a,b)))
    while(a > 0 && b > 0){
        if (a > b) a %= b;
        else b %= a;
    }
    if (a==0) cout << b;
    else cout << a;
}