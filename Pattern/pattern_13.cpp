#include<iostream>
using namespace std;

/*Pattern 13 : 
A B C D 
A B C
A B
A
*/
void pattern13(int n){
    int num = 65;
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout << char(num) << " ";
            num ++;
        }
        num = 65;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern13(n);
    return 0;
}