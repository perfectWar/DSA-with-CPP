#include <iostream>
using namespace std;

/*Pattern 15 :
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1 
*/
void pattern15(int n){
    int start;
    for(int i = 1; i <= n; i++){
        if (i % 2 != 0) start = 1;
        else start = 0;
        for (int j=1; j <=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern15(n);
}