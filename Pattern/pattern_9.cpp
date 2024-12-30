#include<iostream>
using namespace std;

/*Pattern 9 : 
  *
 ***
*****
*****
 ***
  *
*/
void pattern9(int n){
    for (int i= 1; i <= n; i++){
        for (int spc = (n)-1; spc >= i; spc --){
            cout << "  ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    int m = n;
    for(int i = 0; i < n; i++){
        for(int spc = 1; spc <= i; spc++ ){
            cout << "  ";
        }
        for(int j = 2*m-1; j > 0; j--){
            cout << "* ";
        }
        m--;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern9(n);
    return 0;
}