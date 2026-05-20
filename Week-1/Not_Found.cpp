#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    string s1 = "abcdefghijklmnopqrstuvwxyz";
    string s,s2;
    cin>>s;
    sort(s.begin(),s.end());
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==0){
            s2.push_back(s[i]);
            mp[s[i]]++;
        }
    }
    
    if(s1==s2) cout<<"None"<<endl;
    else{
        for(int i=0;i<26;i++){
            if(s1[i]!=s2[i]){
                cout<<s1[i]<<endl;
                break;
            }
        }
    }
    return 0;
}