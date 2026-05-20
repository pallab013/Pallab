#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    map<string,string>ans,change;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(change.find(s1)!=change.end()){
            string s = change[s1];
            ans[s] = s2;
            change.erase(s1);
            change[s2] = s;
        }else{
            ans[s1] = s2;
            change[s2] = s1;
        }    
    }
    cout<<ans.size()<<endl;
    for(auto[x,y]:ans) cout<<x<<" "<<y<<endl;

    return 0;
}