#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int fee;
    cin>>fee;

    int bsp=arr[0];
    int ssp=0;
    for(int i=1;i<n;i++){
        if(ssp<(arr[i]-bsp-fee)){
            ssp=(arr[i]-bsp-fee);
        }
        if(arr[i]-ssp<bsp){
            bsp=arr[i]-ssp;
        }
    }
    cout<<ssp<<endl;
    return 0;
}