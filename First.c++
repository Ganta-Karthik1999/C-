#include<iostream>

using namespace std;



class employ{
public:
    string name;
    string company;
    int age;
/*This a function that is created inside the class */
    void intro(){
        cout<<"Name==>"<<name<<" company="<<company<<"   age="<<age<<endl; 
    }

};


int main(){

    employ employ1;
    employ1.name="Karthik";
    employ1.company="Tesla";
    employ1.age=23;
    employ1.intro();

    employ employ2;

    employ2.name="Rohith";
    employ2.company="TCS";
    employ2.age=32;
    employ2.intro(); 



}