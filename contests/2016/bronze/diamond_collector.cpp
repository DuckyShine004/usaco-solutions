#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("diamond.in","r",stdin);
    int n,k,res=0; cin>>n>>k;
    vector<int> v(n);
    
    for(int &x:v)
        cin>>x;

    sort(v.begin(),v.end());

    for(int i=0;i<n-1;i++){
        int cur=1;
        for(int j=i+1;j<n;j++){
            if(v[j]-v[i]>k)
                break;
            ++cur;
        }
        res=max(res,cur);
    }

    freopen("diamond.out","w",stdout);
    cout<<res;
    return 0;
}

