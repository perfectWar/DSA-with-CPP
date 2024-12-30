#include<iostream>
using namespace std;

/*Pattern 16
1         1 
1 2     2 1
1 2 3 3 2 1
*/
void pattern16(int n){
    int spc = 2 * (n-1);
    for (int i=1; i <= n; i++){
        // numbers
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }

        //space
        for(int j=1; j<=spc; j++){
            cout << "  ";
        }

        //numbers
        for(int j = i; j >=1; j--){
            cout << j << " ";
        }
        cout << endl;
        spc -= 2;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern16(n);
}