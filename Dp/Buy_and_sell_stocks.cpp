#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int least=arr[0];
    int mx=0;

    for(int i=1;i<n;i++){
        if(arr[i]>least){
            mx=max(mx,arr[i]-least);
        }else{
            least=arr[i];
        }
    }

    cout<<mx<<endl;
    return 0;
}