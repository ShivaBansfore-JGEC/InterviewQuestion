#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    //input taking
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];


    //solvina a problem

    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;

    int tot=m*n;
    int cnt=0;
    while(cnt<tot){
        //left box
        for(int i=minr,j=minc;i<=maxr && cnt<tot;i++){
            cout<<arr[i][j]<<endl;
            cnt++;
        }
        minc++;

        //bottom box
        for(int i=maxr,j=minc;j<=maxc && cnt<tot;j++){
            cout<<arr[i][j]<<endl;
            cnt++;
        }
        maxr--;

        //right box
        for(int i=maxr,j=maxc;i>=minr && cnt<tot;i--){
            cout<<arr[i][j]<<endl;
            cnt++;
        }
        maxc--;

        //top box
        for(int i=minr,j=maxc;j>=minc && cnt<tot;j--){
            cout<<arr[i][j]<<endl;
            cnt++;
        }

        minr++;

    }
    return 0;
}