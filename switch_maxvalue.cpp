#include<iostream>
using namespace std;
int main()
{
int number1, number2,c;
cout<<"enter two numbers"<<"\n";
cin>>number1>>number2;
cout<<"1 for swaping "<<"\n";
cout<<"2 for max value"<<"\n";
switch(c)
{
case 1:
{
int t;
t=number1;
number1=number2;
number2=t;
cout<<"after swapped value of number1="<<number1<<"\n";
cout<<"after swapped value if number2="<<number2<<"\n";
break;

}
case 2:
{
if(number1>number2)
{
cout<<number1<<"is max";
}
else
{
cout<<number2<<"is max";
}
break;
}
default:
{
cout<<"go out";
break;
}
}

}
