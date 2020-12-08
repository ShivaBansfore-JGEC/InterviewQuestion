#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long arr[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }


    //initialaizing dp

    long long dp[n][k];
    for(int i=0;i<k;i++) dp[0][i]=arr[0][i];


    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            long long mn=INT_MAX;
            for(int l=0;l<k;l++){
                if(l!=j){
                    mn=min(mn,dp[i-1][l]);
                }
            }
            dp[i][j]=arr[i][j]+mn;
        }
    }

long long ans=INT_MAX;
    for(int i=0;i<k;i++){
        ans=min(ans,dp[n-1][i]);
    }

cout<<ans<<endl;

    return 0;
}