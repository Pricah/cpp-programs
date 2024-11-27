/* 
author Priscilla 
Reg BSE-01-0051/2024
description Creating rectangular models */
#include <iostream>
using namespace std;

class Rectangle{ 
    public:
    double length, width;
    
    double area () {
        return length * width;
    
    }
    double perimeter(){
        return 2*(length+width);
    }
};

int main() {
    Rectangle r1, r2;
    r1.length=10;
    r1.width=20;
    
    cout<<"The area is" <<r1.area()<<endl;
    cout<<"The perimeter is" <<r1.perimeter()<<endl;
    
     r2.length=20;
    r2.width=30;
    
    cout<<"The area is" <<r2.area()<<endl;
    cout<<"The perimeter is" <<r2.perimeter()<<endl;
    
    return 0;
}