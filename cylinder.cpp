/*Author Priscilla 
Reg BSE-01-0051/2024 
Description  Class cylinder*/
#include <iostream>
using namespace std;

class Cylinder{
    public:
    double radius, height;
    
    double volume () {
        return 3.142*radius*radius*height;
    }
    
    double surface_area () {
       return  2*(3.142*radius*radius)+2*(3.142*radius*
height);
    }
};

int main() {
    Cylinder c1;
    c1.radius=10;
    c1.height=20;
    
    cout<<"The volume is "<<c1.volume()<<endl;
    cout<<"The surface_area is "<<c1.surface_area()<<endl;

    return 0;
}