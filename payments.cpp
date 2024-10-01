#include <iostream>
#include<cmath>
 using namespace std;
int main() {
    int hours,wage,overtime,gross_pay,tax,net_pay;
    cout<<"Enter hours of work per week and hourly wage"<<endl;
    cin>>hours>>wage;
if(hours>40){
    overtime=hours+(hours*0.5);
}
else{
    overtime=hours;
}
gross_pay=overtime*wage;
cout<<"Gross pay:"<<gross_pay<<endl;
tax=(0.15*600)+((gross_pay-600)*0.2);
cout<<"Tax:"<<tax<<endl;
net_pay=gross_pay-tax;
cout<<"Net pay:"<<net_pay<<endl;
    return 0;
}