/*Author: Priscilla
Registration:BSE-01-0051/2024
Description:using while loop to display numbers 1 to 100 and add them to produce the sum 
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;
    while(i > 0 && i <= 100)
    {
        cout << i << endl;
        sum = sum + i;  // Add i to sum first
        i++; 
    }
    cout << "The sum is " << sum << endl;

    return 0;
}
