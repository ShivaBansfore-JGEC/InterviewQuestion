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

    int dp[cap+1];
    for(int i=0;i<=cap;i++){
        dp[i]=0;
    }

    for(int i=1;i<=cap;i++){
        int mx=0;
        for(int j=0;j<n;j++){
            if(i>=wt[j]){
                mx=max(mx,values[j]+dp[i-wt[j]]);
            }
        }
        dp[i]=mx;
    }

    cout<<dp[cap]<<endl;
    return 0;
}