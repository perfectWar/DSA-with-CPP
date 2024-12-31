#include<iostream>
using namespace std;

/*Pattern 17 : 
        A 
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/

void pattern17(int n){
    for(int i=1; i<=n; i++){

        //space
        for(int j=n; j>i; j--){
            cout << "  ";
        }

        //Pattern 
        char ch = 'A';
        int breakpoint = (2*i)/2;
        for(int j=1; j< 2*i; j++){
            cout << ch << " ";
            if (j < breakpoint) ch ++;
            else ch--;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern17(n);
    
}