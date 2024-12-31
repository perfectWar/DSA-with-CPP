#include<iostream>
using namespace std;

/*Pattern 19 :
*                 * 
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

void pattern19(int n){
    int spc = 2*(n-1);
    for (int i=1; i<=n; i++){
        //pattern
        for (int j=1; j <=i; j++){
            cout << "* ";
        }
        
        //space
        for(int j=1; j <= spc; j++){
            cout << "  ";
        }
        spc -= 2;

        //pattern
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 1; i<=n-1; i++){
        for(int j = n-1; j>=i; j--){
            cout << "* ";
        }
        for(int j=1; j<= i*2; j++){
            cout << "  ";
        }

        for(int j=n-1;j>=i; j-- ){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern19(n);
}