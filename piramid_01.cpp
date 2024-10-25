#include<iostream>
using namespace std;
int main()
{
int a=1,k=0,d;
for(int i=1; i<=5; i++)
{
for(int j=5;j>i;j--)
{
    cout<<" ";
}
for(int s=1;s<=i;s++)
{
    d=a;
    a=k;
    k=d;
    cout<<d<<" ";
}
cout<<"\n";
}
}
