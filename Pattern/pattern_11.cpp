#include <iostream>
using namespace std;

/* Pattern 11 :
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void pattern11(int n){
    int num = 1;
    for(int i=1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern11(n);
}