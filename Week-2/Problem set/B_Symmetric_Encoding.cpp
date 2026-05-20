#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,s2,ans;
        cin>>s;
        set<char>st;

        for(auto u:s) st.insert(u);
        for(auto u:st) s2.push_back(u);
    
        for(int cur=0;cur<n;cur++){
            int i,j;
            for(i=0,j=s2.size()-1;i<=j;i++,j--){
                if(s[cur] == s2[j]){
                    ans.push_back(s2[i]);
                }else if(s[cur]==s2[i]){
                    ans.push_back(s2[j]);
                }
            }
        }
        cout<<ans<<endl;

        
    }
    return 0;
}