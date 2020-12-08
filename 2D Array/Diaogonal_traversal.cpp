#include<bits/stdc++.h>
using namespace std;

int  main(){

    //input taking 
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    //solvina a problem
    for(int i=0;i<n;i++){
        int r=0;
        int col=i;
        while(r <n && col <n){
            cout<<arr[r][col]<<endl;
            r++;
            col++;
        }
    }

    return 0;
}