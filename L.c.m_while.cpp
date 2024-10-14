//L.C.M//
#include<iostream>
using namespace std;
int main()
{
int no1,no2,mx;
cout<<"enter 1st no:"<<"\t";
cin>>no1;
cout<<"enter 2nd no:"<<"\t";
cin>>no2;
mx=no1>no2?no1:no2;
while(true)
{

    if(mx%no1==0&&mx%no2==0)
    {

        cout<<mx;
        break;
    }
    mx++;
}
}
