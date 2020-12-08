#include<bits/stdc++.h>
using namespace std;
 int chess[10][10];

void display(int arr[][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void knight_tour(int chess[][10],int r,int c,int move,int n){
    cout<<move<<endl;
    if(r<0 || c<0 || r>=n || c>=n || chess[r][c]>0){
        return;
    }else if(move==(n*n)){
        chess[r][c]=move;
        display(chess,n);
        chess[r][c]=0;
        return;

    }

    chess[r][c]=move;
    knight_tour(chess,r-2,c+1,move+1,n);
    knight_tour(chess,r-1,c+2,move+1,n);
    knight_tour(chess,r+1,c+2,move+1,n);
    knight_tour(chess,r+2,c+1,move+1,n);

    knight_tour(chess,r+2,c-1,move+1,n);
    knight_tour(chess,r+1,c-2,move+1,n);
    knight_tour(chess,r-1,c-2,move+1,n);
    knight_tour(chess,r-2,c-1,move+1,n);
    chess[r][c]=0;
}




int main(){
    int n,r,c;
    cin>>n>>r>>c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            chess[i][j]=0;
        }
    }
knight_tour(chess,r,c,0,n);
    return 0;
}