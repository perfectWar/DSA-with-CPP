#include<iostream>
using namespace std;

/*Pattern 8 : 
***** 
 ***
  *
*/
void pattern8(int n){
    int m = n;
    for(int i = 0; i < n; i++){
        for (int spc = 1; spc <=i; spc ++ ){
            cout << "  ";
        }

        for(int j=2*m-1; j > 0; j-- ){
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
    pattern8(n);
}