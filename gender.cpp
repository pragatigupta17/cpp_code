#include <iostream>
using namespace std;
int main()
{
char c;
cout<<"enter any char"<<"\n";
cin>>c;
switch(c)
{
case 'M':
case 'm':
{
cout<<"male";
break;
}
case 'F':
case 'f':
{
cout<<"female";
break;
}
default:
{
cout<<"other";
break;
}

}
