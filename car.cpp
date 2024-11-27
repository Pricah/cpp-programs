/*author Priscilla 
ADM BSE-01-0051/2024
 Description CAR
*/
#include <iostream>
using namespace std;


class Car{
    private:
    string brand;
    string model;
    float price;
    int mileage;
    public:
    Car(string b, string m, float p, int mil) :brand (b),
    model (m), price(p), mileage (mil) {}
        
        string getbrand (){return brand;}
        string getmodel (){return model;}
        float getprice (){return price;}
        int getmileage (){return mileage;}
    
};

int main() {
  Car car("Toyota", "Corolla", 200000, 5000 );
  
  
  cout<<"The brand is "<<car.getbrand()<<endl;
  cout<<"The model is "<<car.getmodel()<<endl;
  cout<<"The price is "<<car.getprice()<<endl;
  cout<<"The mileage is "<<car.getmileage()<<endl;
  

    return 0;
}