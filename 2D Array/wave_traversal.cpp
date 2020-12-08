#include<bits/stdc++.h>
using namespace std;

int main(){

    //input
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++) cin>>arr[i][j];


    //print matrix
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //solving problem
    int dir=1;
    int current_pos=-1;
    for(int i=0;i<m;i++){
        if(dir==1){
            for(int j=0;j<n;j++){
                cout<<arr[j][i]<<endl;
                current_pos=j;
            }
            dir=0;
        }else{
            if(current_pos!=-1){
                for(int k=current_pos;k>=0;k--){
                    cout<<arr[k][i]<<endl;
                }
                dir=1;
            }
        }

    }
    return 0;
}