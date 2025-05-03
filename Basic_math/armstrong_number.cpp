#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = int (log10(n) + 1);
    int sum = 0;
    int x = n;
    while(x != 0){
        int last = x%10;
        sum = sum + (pow(last,count));
        x/=10;
    }
    if (sum == n) cout << "Armstrong Number";
    else cout << "Not a armstrong number";
}