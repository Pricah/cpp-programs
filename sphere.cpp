/*Author: Priscilla 
Reg:BSE-01-0051/2024
Description:program to calculate volume of a sphere
*/
#include <iostream>
#include <cmath> //used for pow 
#include <iomanip> //used for set precision 
using namespace std;
float vol(int radius);
int main(){
    int radius;
    float ans;
    cout<<"Enter radius:"<<endl;
    cin>>radius;
    ans=vol(radius);
    cout<<fixed<<setprecision(2);//this will specify two decimal places 
    cout<<"The volume is:"<<ans;
    return 0;
}
float vol( int radius){
    float vol_sphere;
    vol_sphere=(4.0/3.0)*(22.0/7.0)*pow(radius,3);
    return vol_sphere;
}
    
