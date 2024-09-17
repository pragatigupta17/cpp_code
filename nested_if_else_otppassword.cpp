#include<iostream>
using namespace std;
int main()
{


int psw , otp;
cout <<"enter the password";
cin >> psw;
if(psw==010417)
{
cout<< "enter otp"<<"\n";
cin >> otp;
if (otp==0104)
{
cout << "u r owner" <<"\n";
}
else
{
cout <<"u r fraud";
}
}
else{
cout << "wrong password" <<"\n";
}
}











//write a program psw otp using nested if else
