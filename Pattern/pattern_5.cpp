#include<iostream>
using namespace std;

/*Pattern 5:
****
***
**
*
*/
void pattern5(int n){
    for (int i= 1; i <= n; i++){
        for(int j=n; j>=i; j-- ){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern5(n);   
}