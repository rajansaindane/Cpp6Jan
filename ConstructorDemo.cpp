#include<iostream>
using namespace std;

class ConstructorDemo
{
    public:
    string name;
    string address;
    ConstructorDemo()
    {
        cout<<"inside constructor"<<endl;
    }
      ConstructorDemo(int a)
    {
        cout<<"inside parametrised constructor : "<<a<<endl;
    }
      ConstructorDemo(string name,string address) 
    {
        this->name=name;  
         this->address=address;
    }

    ~ConstructorDemo()
    {
        cout<<"Inside distructor"<<endl;
    }

    void showData()
    {
        cout<<"name : "<<name<<endl;
        cout<<"address : "<<address<<endl;

    }
     void display()
    {
        cout<<"inside showData"<<endl;
    }

};
int main()
{
    ConstructorDemo demo=ConstructorDemo("viraj","punekar");
    //object create
    demo.showData();
    

    return 0;
}
