#include<iostream>
using namespace std;

class ConstructorDemo
{
    public:

    ConstructorDemo()
    {
        cout<<"inside constructor"<<endl;
    }
      ConstructorDemo(int a) : ConstructorDemo(10,20)
    {
        cout<<"inside parametrised constructor : "<<a<<endl;
    }
      ConstructorDemo(int a,int b) : ConstructorDemo()
    {
                cout<<"a :"<<a<<endl;
                cout<<"b :"<<b<<endl;
    }
    void showData()
    {
        cout<<"inside showData"<<endl;
    }
     void display()
    {
        cout<<"inside showData"<<endl;
    }

};
int main()
{
    ConstructorDemo demo=ConstructorDemo(10);
    ;//object create
    demo.showData();
    demo.display();

    return 0;
}
