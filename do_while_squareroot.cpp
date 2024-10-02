#include<iostream>
using namespace std;
int main()
{
int no,i=1,c=0;
bool f=false;
cout<<"enter an no :"<<"\t";
cin>>no;
do{
   if(i*i==no)
   {
      // cout<<i<<"\n";
      f=true;
       break;
   }

c++;
i++;
}while(i<=no/2);
//cout<<"counting =";
if(f==true){


cout<<"valid square="<<i;
}
else{
    cout<<"not valid no.";
}
}
