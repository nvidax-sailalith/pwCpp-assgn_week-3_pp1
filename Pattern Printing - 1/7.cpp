/*Print the following pattern
Sample Input : n = 4
Output :
   ****
  ****
 ****
****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//n=4 to get the answer
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<" ";
        }

        for(int j=1;j<=n;j++){
            cout<<"*";
        }
    cout<<endl;
    }

}