/*Print the following pattern
Input: n = 4
Output:
1
2 1
3 2 1
4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//n=4 to get the answer
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}