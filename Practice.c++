#include <iostream>
using namespace std;

/* Now we will all the oop concept here
1) Constructor overloading
2)Encapsulation
3)Inhertance---done
4)Abstraction
5)polymorphism
*/

/* Now we will do the abstraction

if we do the virtual function and access it another class then it is  called abstraction.
*/

class promotion
{
    virtual void ask() = 0;
};

/* This is the base class*/
class Employ : promotion
{
private:
public:
    string name;
    int age;
    string company;

    void display()
    {
        cout << " Name= " << name << " Age= " << age << " Company= " << company << endl;
    }

    /*Constructor*/

    Employ(string Name, int Age, string Company)
    {
        name = Name;
        age = Age;
        company = Company;
    }

    void ask()
    {
        if (age > 30)
        {
            cout << "Not promoted"<<endl;
        }
        else
        {

            cout << "Promoted";
        }
    }
};

/*Encapsulation
Storing the values in the private decorators and accessing the value's using the get and set functions is called encapusulation
*/
class testing
{
private:
    string Name;
    string Company;

public:
    string setname(string name) { Name = name; }
    string getname() { return Name; }

    string setcompany(string company) { Company = company; }
    string getcompany() { return Company; }
};
/*This is the base case

Here we are doing the inheritance
*/
class Developer : public Employ
{
public:
    string lang;
    /*This is the constructor of the child class*/
    Developer(string name, int age, string company, string Lang) : Employ(name, age, company)
    {
        lang = Lang;
    }
};

int main()
{
    Employ e1 = Employ("Karthik", 23, "Tesla");
    e1.display();
    cout <<"================================================================"<<endl;
    e1.ask();
    cout <<"================================================================"<<endl;
    Developer d1 = Developer("Ganta Karthik", 23, "Tesla", "C++");
    d1.display();
    testing t1;
    t1.setname("Karthik");
    cout << t1.getname();
    t1.setcompany("Tesla");
    cout << t1.getcompany();

    return 0;
}