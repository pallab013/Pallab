#include<bits/stdc++.h>
using namespace std;
bool v[105];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;

    while(n--){
        int x;
        cin>>x;
        v[x] = 1;
    }

    int ans = v[x];
    for(int i=0;i<x;i++){
        ans+=!v[i];
    }
    cout<<ans;
    return 0;
}