#include<iostream>
using namespace std;
int main()
{
int number1;
int number2;
int number3;
cout <<"enter 3 number : " <<"\n";
cin >> number1 >> number2 >> number3;
number1 = number2;
number2 = number3;
number3 = number1;
cout << "after swapped value of number1 =" << number1<<"\n";
cout << "after swapped value of number2 =" <<number2<<"\n";
return 0;
}
