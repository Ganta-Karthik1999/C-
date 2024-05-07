#include <iostream>
using namespace std;

/*This is the base class that has all the function to be called*/
class employ
{
public:
    string Name;
    string Company;
    int Age;
    /*This a function that is created inside the class */
    void intro()
    {
        cout << "Name==> " << Name << " company= " << Company << "   age= " << Age << endl;
    }
    /* This is a constructor*/
    employ(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

class Developer :public employ
{
public:
    string favLag;
    Developer(string Name, string Company, int Age, string FavLag) :employ(Name, Company, Age)
    {
        favLag = FavLag;
    }
    void fix()
    {
        cout << "His Favourate language is: "<<favLag<< endl;
    }
    
} ; 

int main()
{
    employ e1=employ("Mayank","Tesla",32);
    e1.intro();
    cout<<"================"<< endl;
    Developer d1= Developer("Karthik","Tesla",22,"C++");
    d1.fix();
    d1.intro();
}