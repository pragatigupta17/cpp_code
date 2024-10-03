#include<iostream>
using namespace std;
int main()
{
int number, c=0;
cout <<"enter any no."<<"\t";
cin >> number;
while(number > 0)
    {
if(number%10>=0)
{
c++;
}
number=number/10;
}
cout<<"total digit"<<c;
}
