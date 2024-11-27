/*Author Priscilla 
reg BSE-01-0051/2024
descrition definition of a shape and retriving its color */
#include <iostream>
using namespace std;


class Shape{
    protected:
  string color;
    public:
   void set_color(string c) { 
            color = c;
  }
    string get_color(){
        return color;
    }
    
};

int main() {
  
  Shape add;
  add.set_color("red");
  
   cout << "The color is " << add.get_color() << endl;
  
    return 0;
}