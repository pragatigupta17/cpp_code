#include<iostream>
using namespace std;
int main()
{
int a,c=0,k;
cout<<"enter any no."<<"\t";
cin>> a;
k=a-1;
while(k>=1)
    {
if(a%k==0){

c++;
}
k--;
}
cout<<"factor ="<<c;
}
