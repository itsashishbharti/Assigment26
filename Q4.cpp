#include<iostream>
using namespace std;
class Counter
{
    int count=0;
    public:
    Counter()
    {
    }
    void counter()
    {
        count++;
    }
    void print()
    {
        cout<<"Counter="<<count<<endl;
    }
};
int main()
{
    Counter c;
    c.counter();
    c.counter();
    c.print();
    c.counter();
    c.counter();
    c.counter();
    c.counter();
    c.print();
    return 0;
}