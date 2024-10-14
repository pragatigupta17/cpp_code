// wap to find out the Armstrong number between start (100) to (999) ending range by using for loop
#include<iostream>
using namespace std;
int main()
{
int number , sum=0 , range;
cout<<"enter ur 3 digit no(100-999):"<<"\t";
cin>>number;
int org =number;
for(number;number>0;number=number/10)
{
