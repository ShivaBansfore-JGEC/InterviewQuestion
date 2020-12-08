#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int bsp=arr[0],ssp=0,csp=0;

    for(int i=1;i<n;i++){
        int nbsp=0;
        int nssp=0;
        int ncsp=0;

        if(arr[i]-csp<bsp){
            nbsp=arr[i]-csp;
        }else{
            nbsp=bsp;
        }

        if(arr[i]-bsp>ssp){
            nssp=arr[i]-bsp;
        }else{
            nssp=ssp;
        }

        if(ssp>csp){
            ncsp=ssp;
        }else{
            ncsp=csp;
        }

        bsp=nbsp;
        csp=ncsp;
        ssp=nssp;

    }

    cout<<ssp<<endl;
    
    return 0;
}