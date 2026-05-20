#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;
    vector<int>v(n),a(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        a[i] = v[i];
    }

    
    int sum_sre = 0,sum_dema = 0;
    
    int i=0,j=n-1;
    while(i<j){

        if(v[i]>v[j]){
            sum_sre+=v[i];
            i++;
        }else{
            sum_sre+=v[j];
            j--;
        }

        if(v[i]>v[j]){
            sum_dema+=v[i];
            i++;
        }else{
            sum_dema+=v[j];
            j--;
        }
    }
    if(i==j) sum_sre+=v[i];
    cout<< sum_sre <<" "<<sum_dema<<endl;
    return 0;
}