#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char,int>mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]%2==1){
                if(cnt==k) break;
                cnt++;
                mp[s[i]]--;
                s.erase(i,1);
                i--;
                
            }
        }

        for(int i=0;i<s.size();i++){
            if(cnt==k) break;
            cnt++;
            s.erase(i,1);
            i--;
            mp[s[i]]--;
        }
    
        if(s.size()==1 || s.size()==0){
            cout<<"YES"<<endl;
            continue;
        }
        int odd=0;
        for(auto m:mp){
            if(m.second%2==1) odd++;
        }

        if(odd<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }

    return 0;
}