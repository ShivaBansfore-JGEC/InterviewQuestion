#include<bits/stdc++.h>
using namespace std;
vector<int> graph[1000];
int visited[1000];
bool dfs(int u,int p){
    if(u==p){
        return true;
    }
    visited[u]=1;
    for(int child:graph[u]){
        if(visited[child]==0){
         bool hasPath=dfs(child,p);
            if(hasPath==true){
                return true;
            }
        }
    }
    return false;
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
    
    if(dfs(src,dest)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}