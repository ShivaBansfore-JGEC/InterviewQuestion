#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int sell[n];
    int buy[n];

    int least=arr[0];
    int mx1=0;
    for(int i=0;i<n;i++){
        if(arr[i]>least){
            mx1=max(mx1,arr[i]-least);
            sell[i]=mx1;
        }else{
            sell[i]=max(mx1,arr[i]-least);
        }
        least=min(least,arr[i]);
    }


    int mx=0;
    int mx2=0;
    for(int i=n-1;i>=0;i--){
        if(mx>arr[i]){
            mx2=max(mx2,mx-arr[i]);
            buy[i]=mx2;
        }else{
            buy[i]=max(mx2,mx2-arr[i]);
        }
        mx=max(mx,arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,sell[i]+buy[i]);
    }

    cout<<ans<<endl;
    return 0;
}