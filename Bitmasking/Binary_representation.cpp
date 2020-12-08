#include<bits/stdc++.h>
using namespace std;

//method 1
void bin_dec(int n){

    if(n>1){
        bin_dec(n/2);
    }
    cout<<n%2;

}

//method 2 
void bin(int n){
    if(n>1){
        bin(n>>1);
    }
    cout<<(n&1);
}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n;
    cin>>n;
    bin_dec(n);
    cout<<endl;
    bin(n);
    
    return 0;
}