// wap to genrate power using for loop
#include<iostream>
using namespace std;
int main()
{
int power,base,no=1;
cout<<"enter ur base no:"<<"\t";
cin>>base;
cout<<"enter ur power no:"<<"\t";
cin>>power;

 for(power; power>0;power--)
 {
no=no*base;
 }
 cout<<no;
}
