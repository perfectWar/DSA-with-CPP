#include<iostream>
using namespace std;

/*Pattern 6:
1 2 3 4
1 2 3
1 2
1
*/

void pattern6(int n){
    int count = 1;
    for(int i=1; i <=n; i++){
        for(int j=n; j >= i; j--){
            cout << count << " ";
            count++;
        }
        count = 1;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "ENter the number of rows : ";
    cin >> n;
    pattern6(n);
}