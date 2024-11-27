/*author Priscilla 
reg BSE-01-0051/2024
  Description Comparing ages*/
#include <iostream>
using namespace std;

int main() {
    //variable declaration
    int age1,age2,age3;
    // C++ code 
    cout<<"please enter  first age"<<endl;
    cin>>age1;
    
    cout<<"please enter  second age"<<endl;
    cin>>age2;
    
    cout<<"please enter  third age"<<endl;
    cin>>age3;
    //the code below can be used as an alternative
    //cout<<"enter the ages of 3 students"<<endl;
    //cin>>age1<<age2<<age3;
    
    if (age1>age2&&age2>age3){
        cout<<"student 1 is the eldest"<<endl;
    }
    else if(age2>age1&&age2>age3){
        cout<<"student 2 is the eldest"<<endl;
    }
    else{
        cout<<"student 3 is the eldest";
    }
    
    return 0;
}