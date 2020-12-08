#include<bits/stdc++.h>
using namespace std;
vector<int> graph[1000];
bool visited[1000];
void dfs(int u,int p,string path){
    if(u==p){
        cout<<path<<endl;
        return;
    }
    visited[u]=true;
    for(int child:graph[u]){
        if(visited[child]==false){
            dfs(child,p,path+to_string(child));
        }
    }
    visited[u]=false;
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
    int src,dest;
    cin>>src>>dest;
    for(int i=0;i<1000;i++){
        visited[i]=0;
    }
    
    string a=to_string(src);
    dfs(src,dest,a);
    return 0;
}