#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n){

    int cnt=0;
    while(n){
        cnt+=(n&1);
        n>>=1;
    }
    return cnt;
}

bool check_bleak(int n){
    for(int i=1;i<n;i++){
        if((i+count_set_bits(i))==n){
            return false;
        }
    }
    return true;
}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n;
    cin>>n;
    cout<<check_bleak(n)<<endl;
    return 0;
}