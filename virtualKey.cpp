#include<iostream>
using namespace std;
class VirtualDemo
{
    public : 
    virtual void addition(int a,int b) = 0;

    void showData()
    {
        
    }
};

class CheckAbstrack : public VirtualDemo
{
    public:
      void addition(int a,int b)
    {
        int result=a+b;
        cout<<"addition=>"<<result<<endl;
    }

};

int main()
{
    CheckAbstrack abstract;
    abstract.addition(10,20);
    return 0;
}