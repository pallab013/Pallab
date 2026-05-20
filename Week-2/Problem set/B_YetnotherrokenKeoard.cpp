#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a,b;
        int cnt1 = 0,cnt2 = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                cnt1 = i;
            }else if(s[i]=='b'){
                cnt2 = i;
            } 
        }

        for(int i=0;i<cnt1;i++){
            if(s[i]!='B'){
                if(s[i]>='A' && s[i]<='Z'){
                    a.push_back(s[i]);
                }
            }
        }

        for(int i=0;i<cnt2;i++){
            if(s[i]!='b'){
                if(s[i]>='a' && s[i]<='z'){
                    b.push_back(s[i]);
                }
            }
        }

        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                if(!a.empty()) a.pop_back();
            }
            if(s[i]=='b'){
                if(!b.empty()) b.pop_back();
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}