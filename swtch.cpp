#include<iostream>
using namespace std;
int main()
{
int n1,n2;
char c;
cout<<"enter 1 no\n";
cin>>n1;
cout<<"enter 2 no\n";
cin>>n2;
cout<<"select A for add\n select M for multiply\n select D for division\n select S for subtraction\n";
cin>>c;
switch(c)
{
case 'A':
    {
        cout<<n1+n2;
        break;
    }
case 'M':
    {
        cout<<n1*n2;
        break;
    }
case 'D':
    {
    cout<<n1/n2;
    break;
    }
case 'S':
    {
        cout<<n1-n2;
        break;
    }
default:
    {
    cout<<"go to hell!!!!!";
    break;
    }
}
}
/*switch(condition/expression)
{
case value1:
{
statement/code;
break;
}
case value2:
{
statement/code;
break;
}
default:
{
statement/code;
break;
}
}*/

