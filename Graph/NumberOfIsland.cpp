#include<bits/stdc++.h>
using namespace std;
int graph[1000][1000];
bool visited[1000][1000];

void dfs(int i,int j,int n,int m){

    if(i<0 || j<0 || i>=n || j>=m || graph[i][j]==1 || visited[i][j]==true){
        return;
    }

    visited[i][j]=true;
    dfs(i,j+1,n,m);
    dfs(i+1,j,n,m);
    dfs(i,j-1,n,m);
    dfs(i-1,j,n,m);
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>graph[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visited[i][j]=false;
        }
    }

    int comp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(graph[i][j]==0 && visited[i][j]==false){
                dfs(i,j,n,m);
                comp++;
            }
        }
    }
    cout<<comp<<endl;

    return 0;
}