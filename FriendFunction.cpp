#include<iostream>
using namespace std;
class Data
{
    private : 
    int age;

    public :
    Data() : age(24) { }
    friend int getAge(Data);

};
int getAge(Data a)
{
    return a.age;
}
int main()
{
    Data data;
    cout<<"Age is : "<<getAge(data)<<endl;
    return 0;
}
