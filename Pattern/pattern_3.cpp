#include<iostream>
using namespace std;
/*Pattern 3
1
1 2
1 2 3
1 2 3 4
*/
void pattern3(int n){
    int count = 1;
    for (int i = 1; i <= n; i++){
        for (int j=0; j < i; j++){
            cout << count << " ";
            count += 1;
        }
        cout << endl;
        count = 1;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern3(n);
}