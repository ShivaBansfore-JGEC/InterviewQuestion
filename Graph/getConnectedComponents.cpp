#include<bits/stdc++.h>
using namespace std;
struct node
{
    int src,nbr,w;
};

struct arr{
    string path;
    int path_sum;
};
vector<node> graph[1000];
vector<int> ans;
bool visited[1000];
vector<vector<int>> res;

void dfs(int src,int dest,vector<int> &arr){
    visited[src]=true;
    arr.push_back(src);
    for(node child:graph[src]){
        if(visited[child.nbr]==false){
            dfs(child.nbr,dest,arr);
        }
    }
}



int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        node n1;
        n1.src=u;
        n1.nbr=v;
        n1.w=w;
        node n2;
        n2.src=v;
        n2.nbr=u;
        n2.w=w;
        graph[u].push_back(n1);
        graph[v].push_back(n2);

    }
    for(int i=0;i<1000;i++){
        visited[i]=false;
    }


    for(int i=0;i<n;i++){
        if(visited[i]==false){
            vector<int> arr;
            dfs(i,-1,arr);
            res.push_back(arr);
            for(int j=0;j<arr.size();j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }



    return 0;
}