#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        mp[s2] = s1;
    }
    while(m--){
        string s1,s2;
        cin>>s1>>s2;
        s2.pop_back();
        cout<<s1<<" "<<s2<<"; "<<'#'<<mp[s2]<<endl;
    }
   
    return 0;
}