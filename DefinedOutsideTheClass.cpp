#include<bits/stdc++.h>
using namespace std;

class Distance 
{
    int feet ;
    float inches;
    public:
    Distance():feet(0),inches(0.00)
    {
        
    }
    Distance(int ft , float in):feet(ft),inches(in)
    {
        
    }
    void display(Distance ,Distance);
};

void Distance::display(Distance a,Distance b)
{
    cout << "obj1(inches) = " << a.inches << ",  obj1(feet) =" << a.feet << endl;
    cout << "obj2(inches) =" << b.inches << ",  obj2(feet) =" << b.feet << endl;
}
int main()
{
    Distance obj1,obj2(10,20.9),obj3;
    obj3.display(obj1,obj2);

    return 0;
}