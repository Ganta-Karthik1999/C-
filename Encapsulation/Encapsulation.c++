#include<iostream>

using namespace std;

/*Rules of doing the Constructor
1) The constructor name should be same as the function name
2)The constructor should be set to public
3) The constructor have not return type

*/

class employ{
private:
    string Name;
    string Company;
    int Age;
public:

    void setName(string name){
        Name =name;
    }

    string getName(){
        return Name;

    }

    void setcompany(string company){
        Company=company;
    }

    string getcompany(){
        return Company;

    }
    void setAge(int age){
        Age=age;
    }

    string getAge(){
        return Company;

    }



/*This a function that is created inside the class */
    void intro(){
        cout<<"Name==>"<<Name<<endl<<"company="<<Company<<endl<<"age="<<Age<<endl; 
    }
/* This is a constructor*/
    employ(string name, string company,int age){
        Name=name; Company=company; Age=age;
    }

};


int main(){

    employ employ1("karthik","Tesla",23);

    employ1.setName("Rohith");
    cout<<"This is due to the encapsulation: "<<employ1.getName()<<endl;
    cout<<"=================================================="<<endl; 
    cout<<"This is due to the constructor"<<endl;
    employ1.intro();
    cout<<"=================================================="<<endl;

    employ1.setcompany("TCS");
    cout<<"This is due to the encapsulation: "<<employ1.getcompany()<<endl;
    cout<<"=================================================="<<endl; 
    cout<<"This is due to the constructor"<<endl;
    employ1.intro();
    cout<<"=================================================="<<endl;

    employ1.setAge(24);
    cout<<"This is due to the encapsulation: "<<employ1.getAge()<<endl;
    cout<<"=================================================="<<endl; 
    cout<<"This is due to the constructor"<<endl;
    employ1.intro();
    cout<<"=================================================="<<endl;

}