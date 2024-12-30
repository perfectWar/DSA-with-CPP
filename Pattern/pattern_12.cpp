#include <iostream>
using namespace std;

/*Pattern 12 :
A 
A B 
A B C 
*/

void pattern12(int n){
    int num = 65;
    for (int i = 1; i <= n; i++){
        for (int j=1; j <=i; j++ ){
            cout << char(num) << " ";
            num += 1;
        }
        num = 65;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern12(n);
    return 0;
}