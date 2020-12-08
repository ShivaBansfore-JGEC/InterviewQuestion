#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int dp[k+1][n+1];

    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(i==1){
                dp[i][j]=1;
            }else if(i==j){
                dp[i][j]=1;
            }else if(j<i){
                dp[i][j]=0;
            }else{
                dp[i][j]=dp[i][j-1]*i+dp[i-1][j-1];
            }
        }
    }

    cout<<dp[k][n]<<endl;
    return 0;
}