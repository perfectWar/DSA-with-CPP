#include<bits/stdc++.h>
using namespace std;

int count(int n){

    int count = 0;
    // time complexity for this is O(log10(n)) as the number is divisible by 10 
    // if it divisible by two then it will be as O(log2(n))
    // if it is by 5 then O(log5(n))
    // when the division happen in the loop it will always in log form 
    while(n != 0){
        count += 1;
        n /= 10;
    }
    return count;
}
int another(int n){
    int count = (int)(log10(n) + 1);
    return count;
}
int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    cout << "The number of digit enter is " << count(n) << endl;
    cout << "By another method " << another(n);
}