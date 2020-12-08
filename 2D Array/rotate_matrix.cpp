#include<bits/stdc++.h>
using namespace std;

int main(){

    //input taking 
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }



    //solving a problem

    //step 1: transpose matrix

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }

    //step 2: reverse all row 
    for(int i=0;i<n;i++){
        int li=0;
        int ri=n-1;
        while(li<ri){
            int temp=matrix[i][li];
            matrix[i][li]=matrix[i][ri];
            matrix[i][ri]=temp;
            li++;
            ri--;
        }
    }


    //print matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}