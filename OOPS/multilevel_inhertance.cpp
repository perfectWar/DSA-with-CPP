#include<bits/stdc++.h>
using namespace std;


class person{
    public:
    string name;
    int age;
};

class student : public person{
    public:
    int rollno;
};

class GradStudent : public student{
    public:
    string researchArea;

    void getInfo(){
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "Roll no " << rollno << endl;
        cout << "Research Area " << researchArea << endl;
    }
};

int main(){
    GradStudent s1;
    s1.name = "Mitali";
    s1.age = 21;
    s1.rollno = 22;
    s1.researchArea = "speech recognition";
    s1.getInfo();
}