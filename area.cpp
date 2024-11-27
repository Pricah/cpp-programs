/*author Priscilla 
reg BSE-01-0051/2024
description  rectangle and circle area*/
#include <iostream>
using namespace std;

class Shape{
  
    public:
    string color;
   double length, width, radius;
    
    double area(){
        return length * width;
    }
    double area_2(){
        return 3.142 * radius * radius;
    }
};

int main() {
    
   Shape rectangle, circle;
   rectangle.length=15;
   rectangle.width=10;
   rectangle.color= ("blue");
   
   cout<<"The  rectangle area is "<<rectangle.area()<<endl;
   cout<<"The rectangle color is "<<rectangle.color<<endl;
   
   circle.radius=2;
   circle.color= ("pink");
   
   
   cout<<"The  circle area is "<<circle.area_2()<<endl;
   cout<<"The circle color is "<<circle.color<<endl;
   

    return 0;
}