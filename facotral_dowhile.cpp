#include<iostream>
using namespace std;
int main()
{
int no , i=1;
cout<<"enter an number"<<"\t";
cin>>no;
do{
    i=i*no;
    no--;
}
while(no>=1);
cout<<i;

}
