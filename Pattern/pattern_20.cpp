#include<iostream>
using namespace std;

/*Pattern 20 : 
* * * *
*     *
*     *
* * * *
*/

void pattern20(int n){
    for(int i= 1; i <=n; i++){
        if(i==1 || i==n){
            for(int j = 1; j <=n; j++){
                cout << "* ";
            }
            cout << endl;
        }
        else {
            for(int j =1; j <=n; j++){
                if(j==1 || j==n){
                    cout << "* ";
                }
                else cout << "  ";
            }
            cout << endl;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern20(n);
}