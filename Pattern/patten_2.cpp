#include <iostream>
using namespace std;
/*Pattern is : 
*
**
***
****
*/
void pattern2(int n){
    for(int i = 1; i <= n; i++ ){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern2(n);
    return 0;
}