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

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n;
    cin>>n;
    cout<<count_set_bits(n)<<endl;
    return 0;
}