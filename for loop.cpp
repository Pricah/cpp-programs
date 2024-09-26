/*Author: Priscilla
Reg: BSE-01-0051/2024
Description:For loop
*/
#include <iostream>
using namespace std;

int main() {
    int i, sum = 0;
    for(i = 1; i <= 100; i++) {
        cout << i << endl;
        sum = sum + i;  // Add i to sum
    }
    cout << "The sum is " << sum << endl;

    return 0;
}
