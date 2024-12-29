#include<iostream>
using namespace std;

/*Pattern 7 : 
    *
  * * *
* * * * *
*/

void pattern7(int n){
    for (int i=1; i<=n; i++){
        for(int spc = n-1; spc >= i; spc --){
            cout << "  ";
        }

        for(int j=1; j<=2*i-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern7(n);
    return 0;
}