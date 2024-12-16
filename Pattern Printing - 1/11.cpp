/*Print the following pattern
Input: n = 4
Output:
*
**
***
****
***
**
*
*/
#include <iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;//n=4 to the output
    for(int i=1;i<=n;i++) {
        for(int j=1;j<= n-i;j++) {
            cout << " "; 
        }
        for(int j=1;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--) {
        for(int j=1;j<=n-i;j++) {
            cout << " "; 
        }
        for(int j=1;j<=i;j++) {
            cout << "*"; 
        }
        cout << endl;
    }
}
