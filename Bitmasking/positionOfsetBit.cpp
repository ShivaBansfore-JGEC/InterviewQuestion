#include<bits/stdc++.h>
using namespace std;


int is_power_of_two(unsigned n){
    return n && (!(n&(n-1)));
}

int only_setBit(unsigned n){
    if(!(is_power_of_two(n))){
        return -1;
    }
    int i=1,pos=1;
    while(!(i&n)){
        
        i=i<<1;
        ++pos;
    }
    return pos;

}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    unsigned n;
    cin>>n;
    cout<<only_setBit(n)<<endl;
    return 0;
}