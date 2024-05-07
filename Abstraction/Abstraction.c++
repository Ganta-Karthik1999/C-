#include <iostream>

using namespace std;

/*Rules of doing the Constructor
1) The constructor name should be same as the function name
2)The constructor should be set to public
3) The constructor have not return type

*/

class Abstractemploy
{
    virtual void askforpromotion() = 0;
};

class employ : Abstractemploy
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }

    string getName()
    {
        return Name;
    }

    void setcompany(string company)
    {
        Company = company;
    }

    string getcompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }

    /*This a function that is created inside the class */
    void intro()
    {
        cout << "Name==>" << Name << endl
             << "company=" << Company << endl
             << "age=" << Age << endl;
    }
    /* This is a constructor*/
    employ(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void askforpromotion()
    {

        if (Age > 30)
        {
            cout << "You got promoted";
        }

        else
        {
            cout << "No Promotion!!";
        }
    }
};

int main()
{

    employ employ1("karthik", "Tesla", 23);

    employ1.setName("Rohith");
    cout << "This is due to the encapsulation: " << employ1.getName() << endl;
    cout << "==================================================" << endl;
    cout << "This is due to the constructor" << endl;
    employ1.intro();
    cout << "==================================================" << endl;

    employ1.setcompany("TCS");
    cout << "This is due to the encapsulation: " << employ1.getcompany() << endl;
    cout << "==================================================" << endl;
    cout << "This is due to the constructor" << endl;
    employ1.intro();
    cout << "==================================================" << endl;

    employ1.setAge(35);
    cout << "This is due to the encapsulation: " << employ1.getAge() << endl;
    cout << "==================================================" << endl;
    cout << "This is due to the constructor" << endl;
    employ1.intro();
    cout << "==================================================" << endl;
    cout<<employ1.getAge()<<endl;
    employ1.askforpromotion();
}