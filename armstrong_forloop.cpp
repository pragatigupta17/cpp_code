// wap to find out the Armstrong number between start (100) to (999) ending range by using if else
#include<iostream>
using namespace std;
int main()
{
int number , sum=0 , range;
cout<<"enter ur 3 digit no(100-999):"<<"\t";
cin>>number;
int org =number;
//if(number>=100 && number<=999)
{
    while(number>0)
//cout<<"valid number"<<"\n";
{
range=number%10;
sum=sum+(range*3);
number=number/10;
}
if(sum==org)
{
    cout<<"it is armstrong no:"<<"\n";
    cout<<"value of number = "<<"\n";
}
else{
    cout<<"it is not a amrstrong number";
}
}
}

