#include<iostream>
using namespace std;
int main()
{
int t=1;
for(int r=1;r<=3;r++)
{
for(int c=1;c<=r;c++)
{
cout<< t*t<<"\t";
if(t*t==9)
{
goto cybrom;
}
t++;
}
cout<<"\n";
}
cybrom:
cout<<"\n";
}

