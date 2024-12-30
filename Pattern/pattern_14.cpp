#include <iostream>
using namespace std;

/*Pattern 14 : 
A 
B B
C C C
D D D D
*/

void pattern14(int n){
    int num = 65;
    for (int i= 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            cout << char(num) << " ";
        }
        num ++;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern14(n);
    return 0;   
}