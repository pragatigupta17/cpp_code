#include<iostream>
using namespace std;
int main()
{
for(char r=65;r<=70;r++)
{
for(char c=65;c>r;c--)
{
cout<<" ";
}
for(char s=65;s<=r;s++)
{
cout<<char(s)<<"\t";
}
cout<<"\n";
}
}
