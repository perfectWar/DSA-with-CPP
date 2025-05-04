#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int count = 0;
    for(int i=1; i*i <= num; i++){
        if(num %i==0){
            count ++ ;
            if (num/i != i){
                count++;
            }
        }
    }
    if (count == 2) cout << "Prime Number";
    else cout << "Not a Prime Number";
    return 0;
}