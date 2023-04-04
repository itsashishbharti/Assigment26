#include<iostream>
using namespace std;
class bank
{
    int amount,intr,year,si;
    public:
    bank(int a,int i,int y)
    {
        amount=a;
        intr=i;
        year=y;
    }
    void calculate()
    {
        si=(amount*intr*year)/100;
    }
    void print()
    {
        cout<< "Simple Intrest Is="<<si<<endl;
    }
};
int main()
{
    bank cas(20000,6,5);
    cas.calculate();
    cas.print();
    return 0;
}