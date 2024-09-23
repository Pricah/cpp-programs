/*Author: Priscilla
reg: BSE-01-0051/2024
 description: Grading Program
*/
#include <iostream>
using namespace std;
int main() {
    int sub1, sub2, sub3, average;
cout<<"Enter subject 1, subject 2, subject 3"<<endl;
cin>>sub1>>sub2>>sub3;
average=(sub1+sub2+sub3)/3;
//switch is used to determine the final grade of the student 
    switch (average) {
        case 70 ... 100:
            cout << " Your Grade is : A";
            break;
        case 60 ... 69:
            cout << " Your Grade is : B";
            break;
        case 50 ... 59:
            cout << " Your Grade is: C";
            break;
        case 40 ... 49:
            cout << " Your Grade is: D";
            break;
        case 0 ... 39:
            cout << " Your grade is FAIL";
            break;
        default:
            cout << "Enter valid marks!";
    }
    
    //Telling the OS that the program was successfully executed
    return 0;
}