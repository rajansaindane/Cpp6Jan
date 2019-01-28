#include<iostream>
using namespace std;
class RecursionDemo
{
    public:
        void showArrays(int array[],int i)
        {
            if(i<5)
            {
            cout<<array[i]<<endl;
            i++;
            showArrays(array,i);

            }
        }
};

int main()
{
        int i=0;
    RecursionDemo demo;
    int array[]={1,2,3,4,5};
    demo.showArrays(array,i);
    return 0;
}