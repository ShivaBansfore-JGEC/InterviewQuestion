#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>k;

    int dp[k+1][n];

/*
    for(int i=0;i<=k;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else{
                int ans=0;
                ans=max(ans,dp[i][j-1]);
                for(int m=j-1;m>=0;m--){
                    ans=max(ans,dp[i-1][m]+arr[j]-arr[m]);
                }
                dp[i][j]=ans;
            }
        }
    }

*/

//optimization n2 code..
    for(int i=0;i<=k;i++){
        int mx=INT_MIN;
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else{

                if(dp[i-1][j-1]-arr[j-1]>mx){
                    mx=dp[i-1][j-1]-arr[j-1];
                }

                if(mx+arr[j]>dp[i][j-1]){
                    dp[i][j]=mx+arr[j];
                }else{
                    dp[i][j]=dp[i][j-1];
                }

            }
        }
    }

/*
    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    cout<<dp[k][n-1]<<endl;
    return 0;
}