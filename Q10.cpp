#include<iostream>
using namespace std;
class StaticCount
{
    private:
    static int count;
    public:
    StaticCount()
    {
    }
    void inc()
    {
        count++;
    }
        int print()
    {
        return count;
    }
};
int StaticCount:: count;
int main()
{
    StaticCount s,S1,S2;
    s.inc();
    S1.inc();
    S2.inc();
    cout<<"Value="<<s.print();
    return 0;
}