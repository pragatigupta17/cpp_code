#include<iostream>
using namespace std;
int main()
{
int no1, no2,r,i;
cout<<"enter 1st no:"<<"\t";
cin>>no1;
cout<<"enter 2nd no:"<<"\t";
cin>>no2;
for(int i=1;i<=no1 || i<=no2;i++)
{
if(no1%i==0 && no2%i==0){
r=i;
}
}
cout<<"h.c.f"<<r;
}
