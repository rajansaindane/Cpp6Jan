#include <iostream>

using namespace std;
int main()
{
    int array[3][3];

 for(int row=0;row<3;row++)
    {

        for(int cloumn=0;cloumn<3;cloumn++)
        {

            cout<<"enter the value at"<<row<<cloumn<<endl;
            cin>>array[row][cloumn];

        }
        cout<<endl;


    }
    for(int row=2;row>=0;row--)
    {


        for(int cloumn=2;cloumn>=0;cloumn--)
        {

            cout<<" "<<array[row][cloumn];
        }
        cout<<endl;


    }
cout<<endl;
    return 0;
}
