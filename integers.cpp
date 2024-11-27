/*author Priscilla 
reg BSE-01-0051/2024 
description  intergers*/
#include <iostream>
using namespace std;

class Addition{
public:
double num1, num2, num3;

double calculateAddition (){
    return num1 + num2 + num3;
}
double calculateProduct (){
    return num1 * num2 * num3;
}
};

int main() {
   Addition add;
    add.num1=22;
    add.num2=30;
    add.num3=50;
    
    cout<<"The Addition is "<<add.calculateAddition()<<endl;
    cout<<"The Product is "<<add.calculateProduct()<<endl;
    
    return 0;
}