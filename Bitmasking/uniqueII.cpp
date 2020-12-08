#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int res=arr[0];
    for(int i=1;i<n;i++){
        res=res^arr[i];
    }

    //count right most bit
    int set_bit=res& ~(res-1);

    int first_no=0;
    int second_no=0;
    for(int i=0;i<n;i++){
        if(arr[i]&set_bit){
            first_no=first_no^arr[i];
        }else{
            second_no=second_no^arr[i];
        }
    }
    cout<<first_no<<" "<<second_no<<endl;

}


int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int t=1;
    while(t--){
        solve();
    }
    return 0;
}