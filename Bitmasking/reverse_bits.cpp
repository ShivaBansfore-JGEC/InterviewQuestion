#include<bits/stdc++.h>
using namespace std;

void reverse_bits(int n){

    bool flag=false;
    int rev=0,j=0;

    for(int i=31;i>0;i--){
        int mask=1<<i;
        if(flag==true){
            if(n&mask!=0){
                cout<<1;
                int set_mask=1<<i;
                rev|=set_mask;
            }else{
                cout<<0;
                int set_mask=1<<i;
                rev|=set_mask;
            }
            j++;

        }else{
            if(n&mask){
                cout<<1;
                flag=true;
                int set_mask=1<<j;
                rev|=set_mask;
                j++;
            }else{
                cout<<0;
            }
        }

    }
    cout<<endl;
    cout<<rev<<endl;
    

}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int n;
    cin>>n;
    reverse_bits(n);
    return 0;
}