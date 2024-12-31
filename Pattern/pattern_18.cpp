#include<iostream>
using namespace std;

/*Pattern 18 : 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * *
* * * * * * * * * *
*/
void pattern18(int n){
    int spc = 2*(n-1);
    //top - pattern
    for (int i = 1; i<=n; i++){
        //pattern
        for(int j = n; j>=i; j--){
            cout << "* ";
        }
        //space
        for(int j=2*(i-1); j >=1 ; j--){
            cout << "  ";
        }
        //pattern
        for(int j=n; j>=i; j--){
            cout << "* ";
        }
        cout << endl;
    }
    //Bottom- pattern
    for(int i = 1; i <=n; i++){
        //pattern
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        //space 
        for(int j=1; j<=spc; j++){
            cout << "  ";
        }
        //pattern
        for(int j=i; j>=1; j--){
            cout << "* ";
        }
        cout << endl;
        spc = spc - 2;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern18(n);
}