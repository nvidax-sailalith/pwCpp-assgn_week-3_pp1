//Print the following pattern
//Input: n = 4
//Output:
//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//n=4 to get the answer
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
           if(i%2!=0) cout<<j<<" ";
           else cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}