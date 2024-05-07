#include <iostream>
using namespace std;

class abstractemployee{
    virtual void Ask_PROMOTION()=0;
};

class employee:public abstractemployee{
private:
    string Name;
    string company;
    int age;
public:
    void setName(string name){
        Name=name;
    }
    string getname(){
        return Name;
    }
    
    void introduce_self(){
        cout << "Name--> " << Name << endl;
        cout << "company--> " << company << endl;
        cout << "age--> " << age << endl;
    }
    
    void Ask_PROMOTION(){
        if (age>30){
            cout<<"Got Promoted";
        }
        else{
            cout<<"No promotion";
        }
    }
    
    employee(string n, string C, int A){
        Name = n;
        company = C;
        age = A;
    }
};

class Developer:public employee{
private:
    string fav_lag;
public:
    Developer(string n, string C, int A,string fav_lag):employee(n,C,A){
        this->fav_lag = fav_lag;
    }

    void fixbug(){
        cout<<"Fixed bug using the "<<fav_lag<<endl;
    }

    void Ask_PROMOTION(){
        cout << "As a developer, ";
        employee::Ask_PROMOTION(); // Calling base class method
    }
};

int main(){
    // Employee creation and introduction
    employee employee1 = employee("karthik", "ITC", 22);
    employee1.introduce_self();

    // Encapsulation demonstration
    employee1.setName("karthik");
    cout<<"Employ name is "<<employee1.getname()<<endl;

    // Abstraction demonstration
    employee1.Ask_PROMOTION();

    // Inheritance and Polymorphism demonstration
    Developer d=Developer("karthik", "ITC", 22,"C++");;
    d.fixbug();
    d.Ask_PROMOTION();

    return 0;
}
