#include<bits/stdc++.h>
using namespace std;


//solving a problem
int stairs_variable(int n,int jumps[]){

    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=0;
    dp[n]=1;

    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=jumps[i];j++){
            if((i+j)<=n){
                dp[i]+=dp[i+j];
            }
        }
    }

    for(int i=0;i<n;i++) cout<<dp[i]<<" ";
    cout<<endl;

    return dp[0];
}



int main(){
    //taing a input 
    int n;
    cin>>n;
    int jumps[n];
    for(int i=0;i<=n;i++) cin>>jumps[i];

    cout<<stairs_variable(n,jumps)<<endl;

    return 0;
}