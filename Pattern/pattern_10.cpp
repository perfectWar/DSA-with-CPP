#include<iostream>
using namespace std;

/*Pattern 10 :
*
**
***
**
*
*/
void pattern10(int n){
    for(int i= 1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n-1; i++){
        for(int j = n-1; j >= i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n; 
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern10(n);
}