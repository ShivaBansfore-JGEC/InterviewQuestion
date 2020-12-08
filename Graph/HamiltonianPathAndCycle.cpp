#include<bits/stdc++.h>
using namespace std;
vector<int> graph[1000];
bool visited[1000];

void dfs(int src,int cnt,int n,string path,int orsrc){
    if(cnt==n-1){
        bool isCycle=false;
        for(int nbr:graph[src]){
            if(nbr==orsrc){
                isCycle=true;
                break;
            }
        }
        if(isCycle){
            cout<<path<<"*"<<endl;
        }else{
            cout<<path<<"."<<endl;
        }
        return;
    }

    visited[src]=true;
    for(int child:graph[src]){
        if(visited[child]==false){
            dfs(child,cnt+1,n,path+to_string(child),orsrc);
        }
    }
    visited[src]=false;
    cnt-=1;

}



int main(){
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int src;
    cin>>src;

    for(int i=0;i<1000;i++){
        visited[i]=0;
    }

    dfs(src,0,n,to_string(src),src);

    return 0;
}