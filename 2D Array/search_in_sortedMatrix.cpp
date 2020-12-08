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
    int x;
    cin>>x;

    //solving a problem

    //take row one by one and apply binary search in each row
   /* int row=-1;
    int col=-1;
    for(int i=0;i<n;i++){

        int l=0;
        int r=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[i][mid]==x){
                row=i;
                col=mid;
                break;
            }else if(x<arr[i][mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(row!=-1 && col!=-1){
            break;
        }
    }
    if(row==-1||col==-1){
        cout<<"Not Found"<<endl;
    }else{
        cout<<row<<endl;
        cout<<col<<endl;
    }

    */
   int i=0;
   int j=n-1;
   while(i<n && j>=0){
       if(x==arr[i][j]){
           cout<<i<<endl;
           cout<<j<<endl;
           return 0;
       }else if(x<arr[i][j]){
           j--;
       }else{
           i++;
       }
   }
   cout<<"Not Found"<<endl;


    return 0;
}