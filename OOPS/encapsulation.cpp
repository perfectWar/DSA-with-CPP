#include<bits/stdc++.h>
using namespace std;

/*
encapsulation is wrapping up of data and member functions in a single unit called class
*/
class Account{
    private:
    double balance;
    string password; // data hiding 

    public:
    string accountID;
    string username;

    //setter
    void setBalance(double b){
        balance = b;
    }

    //getter 
    double getbalance(){
        return balance;
    }
};
int main(){
    Account user1;
    user1.accountID = "98W123";
    user1.username = "Mitali";
    cout << user1.accountID << " " << user1.username << endl;
    user1.setBalance(21000);
    cout << user1.getbalance();
}