//TRIANGLE PATTREN FULL PRAMID
#include<iostream>
using namespace std;
int main()
{
for(int i=1; i<=10; i++)
{
for(int r=10;r>i;r--)
{
cout<<" ";
}
for(int s=i;s>=1;s--)
{
cout<<"* ";
}
cout<<"\n";
}
}
