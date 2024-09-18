#include<iostream>
using namespace std;
int main()
{
int total_bill=0;
int choice;
cout << "....Our Starter Menu...." <<"\n";
cout <<"1.Paneer Tika - 150rs."<<"\n";
cout <<"2.Soya Chaap - 120rs."<<"\n";
cout<<"3.Griled Sandwitch - 100rs."<<"\n";
cout<<"4. Pani Puri - 60rs."<<"\n";
cout<<"enter ur choice"<<"\n";
cin>> choice;
if(choice>0&&choice<4){
if(choice==1){
total_bill = total_bill+150;
cout<<"U R Total Bill rs "<<total_bill<<"\n";

}
else if(choice==2){
total_bill = total_bill+120;
cout << "U R Total bill rs"<<total_bill<<"\n";
}
else if (choice ==3){
total_bill = total_bill+100;
cout<<"U R Total Bill rs"<<total_bill<<"\n";
}
else if (choice==4){
total_bill=total_bill+60;
cout<< "U R Total Bill rs"<<total_bill<<"\n";
}
else{
    cout<<"invalid choice"<<"\n";
}
}
}

