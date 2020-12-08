#include<bits/stdc++.h>
using namespace std;
const int sze=106;
int arr[sze][sze];
void rotate_by_one(int minr,int minc,int maxr,int maxc,int arr[][sze]){

    int prev=arr[minr][minc+1];
    int curr=arr[minr][minc];
    //left coloumn
    for(int i=minr,j=minc;i<=maxr;i++){
        curr=arr[i][j];
        arr[i][j]=prev;
        prev=curr;
    }
    minc++;
    //bottom row
    for(int i=maxr,j=minc;j<=maxc;j++){
        curr=arr[i][j];
        arr[i][j]=prev;
        prev=curr;
    }
    maxr--;
    //right row
    for(int i=maxr,j=maxc;i>=minr;i--){
        curr=arr[i][j];
        arr[i][j]=prev;
        prev=curr;
    }
    maxc--;
    //upper row
    for(int i=minr,j=maxc;j>=minc;j--){
        curr=arr[i][j];
        arr[i][j]=prev;
        prev=curr;
    }

}

int main(){
    //input taking 
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int s,r;
    cin>>s>>r;

    //solving a problem

    int minr=0,minc=0,maxr=n-1,maxc=m-1;
    //go to the sth shell 
    minr+=(s-1);
    minc+=(s-1);
    maxr-=(s-1);
    maxc-=(s-1);

    //calculating how many times we need to rotate matrix
    int x=((maxc-minc+1)*2+(maxr-minr+1)*2)-4;
    r=r%x;
    if(r<0){
        r=r+x;
    }
    for(int i=0;i<r;i++){
        rotate_by_one(minr,minc,maxr,maxc,arr);
    }

    //print matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}