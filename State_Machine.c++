#include <iostream>
using namespace std;
enum Signal
        {
                absent = 0,
                present
        };

class SM
{
    int state;
public:
    SM() { state = 0; }
    void update(Signal i1, Signal i2, Signal &o1, Signal &o2)
    {
        o1 = absent;
        o2 = absent;

        if (i1 == i2 == present)
        {
            state++;
            cout<<state<<endl;

            o1 = present;
        }
        if (i1 == i2 == absent && state > 0)
        {

            state--;
            cout<<state<<endl;
            o2 = present;
        }
    }
};

int main()
{
    SM sm1=SM();

    Signal input1, input2;
    Signal output1, output2;
    output1=absent;
    output1=absent;
    string var;
    string var1;
    cout<<"Enter the first value: ";
    cin>>var;
    cout<<"Enter the second value: ";
    cin>>var1;
    if (var=="absent"){
        input1=absent;
    }
    else if (var=="present"){
        input1=present;
    }
    else if (var1=="absent"){
        input2=absent;
    }
    else if (var1=="present"){
        input2=present;
    }
    sm1.update(input1,input2,output1,output2);
    
    return 0;
}
