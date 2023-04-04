#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    int roll,id;
    public:
    student(char name1[],int r,int i)
    {
        strcpy(name,name1);
        roll=r;
        id=i;
    }
    void print()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Roll="<<roll<<endl;
        cout<<"Id="<<id<<endl;

    }
};
int main()
{
    student a("Ashish Bharti",3,133);
    a.print();
    return 0;

}