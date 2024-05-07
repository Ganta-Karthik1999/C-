#include<iostream>

using namespace std;

/*Rules of doing the Constructor
1) The constructor name should be same as the function name
2)The constructor should be set to public
3) The constructor have not return type

*/


class employ{
public:
    string Name;
    string Company;
    int Age;
/*This a function that is created inside the class */
    void intro(){
        cout<<"Name==>"<<Name<<" company="<<Company<<"   age="<<Age<<endl; 
    }
/* This is a constructor*/
    employ(string name, string company,int age){
        Name=name; Company=company; Age=age;
    }

};


int main(){

    employ employ1("karthik","Tesla",23);
    // employ1.name="Karthik";
    // employ1.company="Tesla";
    // employ1.age=23;
    employ1.intro();

    employ employ2("Rohith","TCS",32);

    // employ2.name="Rohith";
    // employ2.company="TCS";
    // employ2.age=32;
    employ2.intro(); 

}