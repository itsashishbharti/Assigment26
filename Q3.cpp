#include<iostream>
using namespace std;
class Cube
{
    int side,re;
    public:
    Cube(int x)
    {
        side=x;
    }
    void volume()
    {
        re=side*side*side;
    }
    void print()
    {
        cout<<"Volume OF Cube="<<re<<endl;
    }
};
int main()
{
    Cube c(5);
    c.volume();
    c.print();
    return 0;
}