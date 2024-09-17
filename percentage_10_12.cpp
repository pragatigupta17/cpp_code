//% of 10 == 65/100 - not eligible
// % of 12 == 70-100 - clecrk
//below 70 == fail, peon
#include<iostream>
using namespace std;
int main()
{
float tenth_percentage , twelfth_percentage;
cout << "enter 10th percentage" <<"\n";
cin >> tenth_percentage;
if(tenth_percentage >= 65 && tenth_percentage <= 100){
cout << "enter 12th percentage" <<"\n";
cin>> twelfth_percentage;
if(twelfth_percentage >= 70 && twelfth_percentage <=100){
cout<< "eligibl for clerk";
}
else{
cout <<"eligible for peon";
}

}
else{
cout << "not eligible";

}
}
