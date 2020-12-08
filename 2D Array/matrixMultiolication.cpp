#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n1,m1,n2,m2;

ll **getArray(int n,int m){
    ll** arr=new ll*[n];
    for(int i=0;i<n;i++){
        arr[i]=new ll[m];
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    return arr;
}

ll **get_res_Array(int n,int m){
    ll** arr=new ll*[n];
    for(int i=0;i<n;i++){
        arr[i]=new ll[m];
        for(int j=0;j<m;j++){
            arr[i][j]=0;
        }
    }
    return arr;
}

void multiply_arr(ll **arr1,ll **arr2,ll **res_arr){
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for(int k=0;k<m1;k++){
                res_arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}


void printArray(ll **arr,int n,int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    cin>>n1>>m1;
    ll **arr1;
    ll **arr2;
    ll **res_arr;
    arr1=getArray(n1,m1);
    cin>>n2>>m2;
    arr2=getArray(n2,m2);
    if(m1!=n2){
        cout<<"Invalid input"<<endl;
        return 0;
    }

    res_arr=get_res_Array(n1,m2);
    multiply_arr(arr1,arr2,res_arr);
    printArray(res_arr,n1,m2);
    return 0;
}