#include<bits/stdc++.h>
using namespace std;

int main(){
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
    int min_col=-1;
    int min_row=-1;
    int max_id=-1;
    int max_col=-1;
    for(int i=0;i<n;i++){
            
            int row=i;
            int  col=0;
            //search min in row 
            int min_el=INT_MAX;
            for(int k=0;k<n;k++){
                if(min_el>arr[row][k]){
                    min_el=arr[row][k];
                    min_col=k;
                    min_row=i;
                }
            }

            
            //search max in col
            int max_el=INT_MIN;
            for(int r=0;r<n;r++){
                if(max_el<arr[r][min_col]){
                    max_el=arr[r][min_col];
                    max_id=r;
                }
            }
    }

    //cout<<arr[min_row][min_col]<<" "<<arr[max_id][min_col]<<endl;

    if(arr[min_row][min_col]!=arr[max_id][min_col]){
        cout<<"Invalid input"<<endl;
    }else{
        cout<<arr[max_id][min_col]<<endl;
    }

    return 0;
}