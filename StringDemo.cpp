#include<iostream>
#include<cstring>
using namespace std;
class StringDemo
{
    public:
    string s="codekul";
    char arra[20]="Institute";
    char array1[20];
    string s1;
    int i=151;//
    int length=strlen(arra);
    void display()
    {
        //strcat(array1,arra);
        cout<<"s1 : "<<s1<<endl;
    }

};
int main()
{
    StringDemo demo;
    demo.display();
}