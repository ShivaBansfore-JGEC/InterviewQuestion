#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int amount;
    cin>>amount;


    int dp[amount+1];
    for(int i=0;i<=amount;i++) dp[i]=0;
    dp[0]=1;
    
    for(int i=0;i<n;i++){
        for(int j=arr[i];j<=amount;j++){
            if(j>=arr[i]){
                dp[j]+=dp[j-arr[i]];
            }
        }
    }

cout<<dp[amount]<<endl;
    return 0;
}