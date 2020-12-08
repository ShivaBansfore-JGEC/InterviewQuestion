#include<bits/stdc++.h>
using namespace std;

void copy_bits(int &x,int &y,int l,int r){

    int i=1;
    int _y=y;

    for(int i=l;i<=r;i++){
        int mask=1<<(i-1);
        if(y&mask){
            x|=mask;
        }
    }

}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int x,y,l,r;
    cin>>x>>y>>l>>r;
    copy_bits(x,y,l,r);
    cout<<x<<endl;
    return 0;
}