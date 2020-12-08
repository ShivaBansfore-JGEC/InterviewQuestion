#include<bits/stdc++.h>
using namespace std;

//top down approach
int stairs(int n,int dp[]){
    //base case
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1) return dp[n];

    int ans=0;
    for(int i=1;i<=3;i++){
        if((n-i)>=0){
            ans+=stairs(n-i,dp);
        }
    }
    return dp[n]=ans;
}

//bottom up solution
int bottomUp_stairs(int n){
    int dp[n+1];
    for(int i=0;i<n;i++) dp[i]=0;
    dp[0]=1;

    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=3;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
            }
        }
    }
    return dp[n];
}



int main(){
    int n;
    cin>>n;
    int dp[100];
    for(int i=0;i<100;i++) dp[i]=-1;
    cout<<stairs(n,dp)<<endl;
    cout<<bottomUp_stairs(n)<<endl;
    return 0;
}