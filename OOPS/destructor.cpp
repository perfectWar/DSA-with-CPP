#include<bits/stdc++.h>
using namespace std;

// deallocate the memory 
class Student{
    public:
    // dynamic memory 
    string name;
    double* cgpa;

    //constructor
    Student(string name, double c){
        this->name = name;
        cgpa = new double; 
        *cgpa = c;
    }

    //destructor 
    // this called automatically if not created 
    ~Student(){
        cout << "I have deleted everything";
        delete cgpa;
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpa << endl; 
    }
};
int main(){
    Student s1("Mitali", 8.5);
    s1.getInfo(); 


}