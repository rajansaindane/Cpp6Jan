#include <iostream>

using namespace std;

class Calculator
{

    void  add(int a,int  b)
    {
        cout<<"Addition : "<<a+b<<endl;
    }
     void  sub(int a,int  b)
    {
        cout<<"Substraction : "<<a-b<<endl;
    }

};
class Exam
{

};

int main()
{
    Calculator calculator;
    int a,b;
    cout << "Enter the valuea  and b : "<<endl;
    cin >> a>>b;
    cout << "a : "<<a << endl;
    calculator.add(a,b);
    calculator.sub(a,b);
    return 0;
}
