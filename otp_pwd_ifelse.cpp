#include<iostream>
using namespace std;
int main()
{
int pwd , otp;
cout<<"enter pwd"<<"\n";
cin>>pwd;
if(pwd==2024)//bi condition
{
cout<<"enter otp"<<"\n";
cin>>otp;
if(otp==1002)
{
    cout<<"u r owner"<<"\n";
}

else
     {
cout<<"u r froud"<<"\n";
}
}
else{
cout<<"wrong pwd"<<"\n";
}

}
