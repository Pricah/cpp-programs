/*Author: Priscilla
reg: BSE-01-0051/2024
 description: Grading Program
*/
#include <iostream>
using namespace std;
int main() {
    int sub1, sub2, sub3,creteria;
float average;
cout<<"Enter subject 1, subject 2, subject 3"<<endl;
cin>>sub1>>sub2>>sub3;
average=(sub1+sub2+sub3)/3;
//helps the preogram identify th creteria to be used to determine the grade the student will get 
if(average<=39){
    creteria=1;
}
else if (average>=40&&average<=49){
    creteria=2;
}
else if (average>=50&&average<=59){
    creteria=3;
}
else if (average>=60&&average<=69){
    creteria=4;
}
else if (average>=70&&average<=100){
    creteria=5;
}
switch(creteria){
case 1:
cout<<"your grade is Fail"<<endl;
break;// tells the program to exit the switch block 
case 2:
cout<<"your grade is D"<<endl;
break;
case 3:
cout<<"your grade is C"<<endl;
break;
case 4:
cout<<"your grade is B"<<endl;
break;
case 5:
cout<<"your grade is A"<<endl;
break;
}

    return 0;
}