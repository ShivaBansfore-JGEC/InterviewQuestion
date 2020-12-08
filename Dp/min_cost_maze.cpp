#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }

    int dp[n+1][m+1];

//initializing dp 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            dp[i][j]=0;
        }
    }

    dp[n-1][m-1]=arr[n-1][m-1];

    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--) {
            if(i+1<n && j+1<m){
                dp[i][j]=min((arr[i][j]+dp[i+1][j]),(arr[i][j]+dp[i][j+1]));
            }else if(i+1>=n && j+1<m){
                dp[i][j]=arr[i][j]+dp[i][j+1];
            }else if(j+1>=m && i+1<n){
                dp[i][j]=arr[i][j]+dp[i+1][j];
            }
        }
    }


    cout<<dp[0][0]<<endl;

    return 0;
}