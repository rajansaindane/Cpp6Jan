#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number : ";
    cin>>number;
    if(number<35)
    {
        cout<<"fail"<<endl;
    }
    else if(number>=35 && number<60)
    {
        cout<<"pass"<<endl;
    }
    else if(number>=60 && number<75)
    {
        cout<<"first"<<endl;
    }
    else if(number>=75 && number<=100)
    {
        cout<<"Distinction"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
   return 0;
}
