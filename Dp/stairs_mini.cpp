#include<bits/stdc++.h>
using namespace std;

int stairs_mini(int n,int jumps[]){

    //initializing dp
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=1000;
    dp[n]=0;

    for(int i=n-1;i>=0;i--){
        int ans=1000;
        for(int j=1;j<=jumps[i] && i+j<=n;j++){

            ans=min(ans,(dp[i+j])+1);
            
        }
        dp[i]=ans;
    }

    //for(int i=0;i<=n;i++) cout<<dp[i]<<" ";
    //cout<<endl;

    return dp[0];

}

int main(){
    //taing a input 
    int n;
    cin>>n;
    int jumps[n+1];
    for(int i=0;i<=n;i++) cin>>jumps[i];
    cout<<stairs_mini(n,jumps)<<endl;
    return 0;
}