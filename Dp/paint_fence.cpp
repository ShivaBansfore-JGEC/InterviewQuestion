#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int dp[3][n];
    dp[0][1]=k;
    dp[1][1]=k*(k-1);
    dp[2][1]=dp[0][1]+dp[1][1];

    for(int i=2;i<n;i++){
        dp[0][i]=dp[1][i-1];
        dp[1][i]=dp[2][i-1]*(k-1);
        dp[2][i]=dp[0][i]+dp[1][i];

    }
    
    cout<<dp[2][n-1]<<endl;


    return 0;
}