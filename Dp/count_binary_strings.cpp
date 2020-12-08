#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int cold0=1;
    int cold1=1;
    for(int i=2;i<=n;i++){
        int cnew0=cold1;
        int cnew1=cold1+cold0;

        cold0=cnew0;
        cold1=cnew1;
    }

    cout<<cold1+cold0<<endl;
    return 0;
}