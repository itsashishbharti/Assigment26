#include<iostream>
using namespace std;
class Date
{
    int day,mo,ye ;
    public:
    Date(int x,int y,int z)
    {
        day=x;
        mo=y;
        ye=z;
    }
    void  Display()
    {
        cout<<"Date....."<<endl;
        cout<<day<<"/"<<mo<<"/"<<ye<<endl;
    }
};
int main()
{
    Date d(22,8,2000);
    d.Display();
    return 0;
}