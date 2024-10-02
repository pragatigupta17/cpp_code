#include<iostream>
using namespace std;
int main()
{
int per;
cout<<"enter ur per"<<"\n";
cin>>per;
if(per>=60 && per<=100)
{
cout<<"1st div";
}
else if(per>=50 && per<=59)
{
cout<<"2nd div";
}
else if(per>=35 && per<=49){
 cout<<"3rd div";
}
else{
cout<<"fail";
}
}
