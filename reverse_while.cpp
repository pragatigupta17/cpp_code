//WAP to display the reverse of a given number.
#include<iostream>
using namespace std;
int main()
{
int number ,k, reversenumber;
cout<<"enter any number"<<"\t";
cin>>number;
while(number>0){
k = number % 10;
    reversenumber = reversenumber*10+k;
   number = number / 10;

}
cout<<"reversed number:"<<reversenumber <<"\t";

}
