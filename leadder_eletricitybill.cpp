//To genrate eletricity bill
//slab 1: 1-100 @3rs
//slab 2: 101 - 200 @5rs
//slab 3: 201-500 @7rs
//slab 4: above 500 @10rs
//slab 5: less than equal zero
        //invalid reading
#include<iostream>
using namespace std;
int main()
{
int reading;
cout<< "Enter UR Reading :" <<"\n";
cin>>reading;
if(reading <=0){
    cout<<"INVALID READING"<<"\n";
}
else if(reading >=1 && reading<=100 ){
    cout << "show total bill amount rs :"<<0.2*(reading*3)+reading*3 <<"\n";
}else if(reading>100 && reading<=200){
cout<< "show total bill amount rs :"<<0.2*(reading*5)+reading*5<<"\n";
}else if(reading >200 && reading<=500){
    cout<<"show total bill amount rs :"<<0.2*(reading*7)+reading*7<<"\n";
}
else if(reading>500){
    cout<<"show total bill amount rs :"<<0.2*(reading*10)+reading*10<<"\n";
}
}
