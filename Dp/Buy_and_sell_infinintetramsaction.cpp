#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int least=arr[0];
    int curr=arr[0];

    long long ans=0;
    for(int i=1;i<n;i++){
        if(curr>arr[i]){
            ans+=curr-least;
            least=arr[i];
        }
        least=min(least,arr[i]);
        curr=arr[i];
    }
    if(curr>least){
        ans+=curr-least;
    }

    cout<<ans<<endl;
    return 0;
}