//WAP to check the given no. is perfect no. or not//
#include<iostream>
using namespace std;
int main()
{
int a,c=0,k;
cout<<"enter any no."<<"\t";
cin>>a;
k=a-1;
while(k >= 1){
    if(a%k==0){
        c=c+k;
    }
    k--;
}
if(c==a){
    cout<<"perfect no";
}
else{
    cout<<"not perfect no";
}
}
