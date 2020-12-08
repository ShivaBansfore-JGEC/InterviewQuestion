#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int values[n];
    for(int i=0;i<n;i++) cin>>values[i];
    int wt[n];
    for(int i=0;i<n;i++) cin>>wt[i];

    int cap;
    cin>>cap;

    int dp[n+1][cap+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=cap;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else{
                int inc=0,exc=0;
                if(j>=wt[i-1]){
                    inc=values[i-1]+dp[i-1][j-wt[i-1]];
                }
                exc=dp[i-1][j];
                dp[i][j]=max(inc,exc);
            }
        }
    }

cout<<dp[n][cap]<<endl;
    return 0;
}