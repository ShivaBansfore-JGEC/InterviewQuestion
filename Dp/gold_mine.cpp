#include<bits/stdc++.h>
using namespace std;

int main(){

    //input taking 
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int dp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m-1){
                dp[i][j]=arr[i][j];
            }else{
                dp[i][j]=0;
            }
        }
    }


    //solving the problem
    for(int j=m-1;j>=0;j--){
        for(int i=n-1;i>=0;i--){
            
            //upper case when no above column
            if(j==m-1){
                dp[i][j]=arr[i][j];
            }else if(i==0){
                    dp[i][j]=max((arr[i][j]+dp[i][j+1]),(arr[i][j]+dp[i+1][j+1]));
            }else if(i==n-1){
                    dp[i][j]=max((arr[i][j]+dp[i][j+1]),(arr[i][j]+dp[i-1][j+1]));
            }else{
                dp[i][j]=max((max((arr[i][j]+dp[i][j+1]),(arr[i][j]+dp[i-1][j+1]))),arr[i][j]+dp[i+1][j+1]);
            }
        }
    }


    int mx=dp[0][0];
    for(int i=1;i<n;i++){
        mx=max(mx,dp[i][0]);
    }

    cout<<mx<<endl;
    return 0;
}