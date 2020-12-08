#include <iostream>
using namespace std;

int fib(int n){
    // write your code here
    int dp[n+1];
    for(int i=0;i<n;i++){
        dp[i]=0;
    }
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}