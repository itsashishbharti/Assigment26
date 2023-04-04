#include<iostream>
using namespace std;
class box
{
    int re, l,b,h;
    public:
    box(int x,int y,int z);
    void  calculate();
    void print();
      
      
        
};
  box::box(int x,int y,int z)
        {
            l=x;
            b=y;
            h=z;
        }
  void box::calculate()
        {
            re=l*b*h;
        }
void box::print()
        {
            cout<<"Volume of box is "<<re<<endl;
        }
int main()
{
    box b(5,4,3);
    b.calculate();
    b.print();
    return 0;
}