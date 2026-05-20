#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            ans+=(v[i]-v[i+1]);
            v[i+1]+= (v[i]-v[i+1]);
        }
    }
    cout<<ans<<endl;
    return 0;
}