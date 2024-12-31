#include<iostream>
using namespace std;

/*Pattern 21 : 
E 
D E
C D E
B C D E
A B C D E
*/
void pattern21(int n){
    for(int i = 0; i < n; i++){
        for(char ch = char(65+ (n-1)) - i; ch <= char(65+(n-1)); ch++ ){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern21(n);
}