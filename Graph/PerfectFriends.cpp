#include<bits/stdc++.h>
using namespace std;

vector<int> graph[1000];
bool visited[1000];

void dfs(int u,vector<int> &a){
    visited[u]=true;
    a.push_back(u);
    for(int child:graph[u]){
        if(visited[child]==false){
            dfs(child,a);
        }
    }

}


int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0;i<k;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0;i<1000;i++){
        visited[i]=0;
    }
vector<vector<int>> res;
    for(int i=0;i<n;i++){
        vector<int> a;
        if(visited[i]==false){
            dfs(i,a);
            res.push_back(a);
        }

    }

vector<int> clubSize;
for(int i=0;i<res.size();i++){
    clubSize.push_back(res[i].size());
}
int sum=0;
for(int i=0;i<clubSize.size();i++){
    for(int j=i+1;j<clubSize.size();j++){
        sum+=(clubSize[i]*clubSize[j]);
    }
}

    return 0;
}