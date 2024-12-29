#include<iostream>
using namespace std;

/*Pattern 4 :
1
2 2
3 3 3
4 4 4 4
*/
void pattern3(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count << " ";
        }
        count += 1;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern3(n);
}