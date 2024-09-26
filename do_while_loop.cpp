/*Author:Priscilla
Reg:BSE-01-0051/2024
Description: do while loop
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;
    do {
        sum = sum + i;  // Add i to sum first
        cout << i << endl;
        i++;  
    } while(i > 0 && i <= 100);  
    
    cout << "The sum is " << sum << endl;

    return 0;
}
