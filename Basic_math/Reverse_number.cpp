#include <bits/stdc++.h>
using namespace std;
int reverse(int n) {
    int sum = 0;
    while(n != 0){
        int last = n%10;

        if (sum > INT32_MAX/10 || (sum == INT32_MAX/10 && last >7)) return 0;
        if (sum < INT32_MIN/10 | (sum == INT32_MIN/10 && last < -8)) return 0;

        sum = sum * 10 + last;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    int result;
    cout << "Enter the number ";
    cin >> n;
    result = reverse(n);
    if (result != 0){
        cout << "The reverse of the number is " << result << endl;
    }
    else{
        cout << "The number is not an integer";
    }

}
// 