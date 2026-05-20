#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<string>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    map<string,int>mp;
    list<string>l;
    for(int i=v.size()-1;i>=0;i--){
        if(mp[v[i]]==0){
            l.push_back(v[i]);
        }
        mp[v[i]]++;
    }
    //l.reverse();
    for(auto u:l) cout<<u<<endl;  

    return 0;
}