#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    
    int odd=0;
    int even=0;
    int i=1;
    while(n){
        if(n&1){
            if(i%2==0){
                even++;
            }else{
                odd++;
            }
        }
        i++;
        n>>=1;

    }

    if(abs(even-odd)%3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n;
    cin>>n;
    solve(n);
    return 0;
}