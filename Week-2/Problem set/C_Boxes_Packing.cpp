#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int res = INT_MIN;
    for(int i=0;i<n;i++){
        res = max(res,mp[v[i]]);
    }
    cout<<res<<endl;
    return 0;
}