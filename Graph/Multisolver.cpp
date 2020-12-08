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
vector<arr> ans;
bool visited[1000];

bool comparator(arr a,arr b){
    return a.path_sum<b.path_sum;
}
void multisolver(int src,int dest,string path,int path_sum){
    if(src==dest){
        arr a;
        a.path=path;
        a.path_sum=path_sum;
        ans.push_back(a);
        return;
    }
    visited[src]=true;
    for(node child:graph[src]){
        if(visited[child.nbr]==false){
            multisolver(child.nbr,dest,path+to_string(child.nbr),path_sum+child.w);
        }
    }
    visited[src]=false;
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
    int src,dest,val,k;
    cin>>src>>dest>>val>>k;



    for(int i=0;i<1000;i++){
        visited[i]=false;
    }


    multisolver(src,dest,to_string(src),0);
    sort(ans.begin(),ans.end(),comparator);
    int sz=ans.size();
    cout<<"Smallest Path = "<<ans[0].path<<"@"<<ans[0].path_sum<<endl;
    cout<<"Largest Path = "<<ans[sz-1].path<<"@"<<ans[sz-1].path_sum<<endl;
    


    string ceil_path="";
    int ceil_path_sum=0;

    for(int i=0;i<sz;i++){
        if(ans[i].path_sum<val){
            ceil_path_sum=ans[i].path_sum;
            ceil_path=ans[i].path;
        }
    }

    
    string floor_path="";
    int floor_path_sum=0;

    for(int i=sz-1;i>=0;i--){
        if(ans[i].path_sum>val){
            floor_path=ans[i].path;
            floor_path_sum=ans[i].path_sum;
        }
    }

cout<<"Just Larger Path than "<<val<<" = "<<floor_path<<"@"<<floor_path_sum<<endl;
cout<<"Just Smaller Path than "<<val<<" = "<<ceil_path<<"@"<<ceil_path_sum<<endl;
cout<<k<<"th largest path = "<<ans[sz-k].path<<"@"<<ans[sz-k].path_sum<<endl;

    return 0;
}