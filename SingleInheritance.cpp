#include<iostream>
using namespace std;
class Animal//based class
{
    public:
        void eat()
        {
            cout<<"eating..."<<endl;
        }
         void eat(string animal)
        {
            cout<<"eating..."<<endl;
        }
};

class Dog  : public Animal//derived class
{
    public:

    void eat()
    {
        cout<<"Dog is eating.."<<endl;
    }


};
class VegNonVeg  : public Dog//derived class
{
    public:

    void eat()
    {
        cout<<"Dog is eating.."<<endl;
    }


};
int main()
{
    Animal anim;
    anim.eat();


}
