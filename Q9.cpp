#include<iostream>
using namespace std;
class bill
{
    int unit;
    float final;
    char name[20];
    public:
    bill()
    {
    }
    void get()
    {
        cout<<"Enter your Name=";
        cin>>name;
        cout<<endl;
        cout<<"Unit=";
        cin>>unit;
    }
    void calbill()
    {
        if(unit<=100)
        {
            final=unit*1.20;
        }
        else if(unit<=200)
        {
            final=120+((unit-100)*2);
        }
        else if(unit>=200)
        {
            final=120+200+((unit-200)*3);
        }
    }
    void Show()
    {
        cout<<"Name......."<<name<<endl;
        cout<<"Electricty Bill....."<<final<<endl;
    }
};
int main()
{
    bill b;
    b.get();
    b.calbill();
    b.Show();
    return 0;
}