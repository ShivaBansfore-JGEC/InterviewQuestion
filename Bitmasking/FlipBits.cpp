#include<bits/stdc++.h>
using namespace std;

void flip_bits(int a,int b){
    
    int cnt=0;
    while(a>0 && b>0){
        if(((a&1)^(b&1))){
            cnt++;
        }
        a>>=1;
        b>>=1;
    }
    while(a>0){
        if(a&1){
            cnt++;
        }
        a>>=1;
    }

    while(b>0){
        if(b&1){
            cnt++;
        }
        b>>=1;
    }

    cout<<cnt<<endl;
}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int a,b;
    cin>>a>>b;
    flip_bits(a,b);
    return 0;
}