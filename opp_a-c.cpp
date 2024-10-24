#include<iostream>
using namespace std;
int main()
{
for(char r=65;r<=70;r++)
{
for(char c=70;c>r;c--)
{
cout<<" ";
}
for(char s=r;s>=65;s--)
{
cout<<char(s);
}
cout<<"\n";
}
}
