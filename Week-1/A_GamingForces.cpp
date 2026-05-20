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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int one = 0,others=0;
        for(int i=0;i<n;i++){
            if(v[i]==1) one++;
            else others++;
        }
        int ans = (one/2)+(one%2)+others;
        cout<<ans<<endl;
    }
    return 0;
}