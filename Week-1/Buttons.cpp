#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int a,b;
    cin>>a>>b;
    int step1 = a+(a-1);
    int step2 = b+(b-1);
    int step3 = a+b;
    int ans = max({step1,step2,step3});
    cout<<ans<<endl;
    return 0;
}