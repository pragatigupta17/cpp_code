#include<iostream>
using namespace std;
int main()
{
char f='A';
for(char r=1;r<=3;r++)
{
for(char c=3;c<=r;c--)
{
cout<<"";
}
for(int s=1;s<=r;s++)
{
cout<<f;
f++;
}
cout<<"\n";
}
}
