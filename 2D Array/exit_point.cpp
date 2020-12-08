#include<bits/stdc++.h>
using namespace std;

int main(){

    //input
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


    //solving a problem

    int cr=0,cc=0;
    int er=n-1,ec=m-1;
    int flag=0;
    while(true){

        flag=(flag+arr[cr][cc])%4;
            if(flag==0){
                cc++;

            }else if(flag==1){
                cr++;

            }else if(flag==2){
                cc--;

            }else if(flag==3){
                cr--;

            }
        
        if(cr>er) {
            cr--;
            break;
        }
        if(cr<0){
            cr++;
            break;
        }
        if(cc>ec) {
            cc--;
            break;
        }
        if(cc<0) {
            cc++;
            break;
        }
    }
    cout<<cr<<endl;
    cout<<cc<<endl;

    return 0;
}