#include <iostream>

using namespace std;

class Employee
{
    public : 
    string name;
    string address;
    string city;
    Company companyl;
       
    void getName(string name)
    {
        this->name=name;
    }
    string setName()
    {
        return name;
    }

    void  add(int a,int  b)
    {
        cout<<"Addition : "<<a+b<<endl;
    }
    public : 
     void  add(int a)
    {
        cout<<"Substraction : "<<a<<endl;
    }

};
class Company 
{

    string cName;
    string   cAdress;
    public :


     void  add(int a)
    {

    }

};
class Student: public Calculator
{
    public :
     void  add(int a)
    {

    }

};

int main()
{
    Calculator calculator;
    Exam exam;
    int a,b;
    cout << "Enter the valuea  and b : "<<endl;
    cin >> a>>b;
    cout << "a : "<<a << endl;
    calculator.add(a,b);
    exam.
    return 0;
}
