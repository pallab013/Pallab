#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;
    set<pair<string,string>>s;
    while(n--){
        string s1,s2;
        cin>>s1>>s2;

        s.insert({s1,s2});

    }
    cout<<s.size()<<endl;
    return 0;
}