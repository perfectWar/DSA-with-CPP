#include <iostream>
using namespace std;
int main(){
    // 1D array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3];

    // 2D array 
    int arr2[3][5]; // 3 is the row and 5 is the column
    cin >> arr2[0][0] >> arr2[0][1] >> arr2[1][2] >> arr2[3][3];
    cout << arr2[1][1];
    return 0;
}