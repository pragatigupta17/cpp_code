#include<iostream>
using namespace std;
int main()
{

for(int i=1; i>=0; ++i)
{
for(int j=0;j<i;++j)
{
    cout<<" ";
}
for(int s=i;s<=(2*i-1);++s)
{

    cout<<(s%2);
}
cout<<"\n";
}
}
