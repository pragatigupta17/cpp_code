// WAP to display the sum of digit of given number by using while loop
#include<iostream>
using namespace std;
int main()
{
  int number,rem,sum=0;
  cout<<"enter any number ="<<"\t";
  cin>>number;
  while(number > 0)
       {
        sum=sum+number%10;
        number=number/10;
        }

        cout<<sum;
}


