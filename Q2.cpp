#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {

    }
    void setTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showTime()
    {
        cout<<"Hours"<<":"<<"Minute"<<":"<<"Sec"<<endl;
        cout<<"  "<<h<<":"<<"    "<<m<<" :    "<<s<<endl;
    }
    void normalize()
    {
        int te;
        if(s>=60)
        {
            te=s/60;
            s=s%60;
            m=m+te;
        }
        if(m<=60)
        {
            h=h+(m/60);
            m=m%60;
        }
    }
    Time add(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(2,53,55);
    t2.setTime(1,4,03);
    t3=t1.add(t2);
    t3.showTime();
    t3.normalize();
    t3.showTime();
    return 0;
}