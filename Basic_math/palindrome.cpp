#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter the string ";
    cin >> s;
    int n = s.length();
    bool isPalindrome = true;
    for(int i=0; i < n; i++){
        if(s[i] != s[n-1-i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) cout << "Palindrome";
    else cout << "Not a Palidrome";
}