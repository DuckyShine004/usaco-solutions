#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;
#define f first
#define s second

void dbg(const vector<pair<int,char>>& v){
    for(auto& x:v)
        cout<<x.s<<x.f<<'\n';
}
    

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //freopen("file.in","r",stdin);
    int n; cin>>n;
    vector<pair<int,char>> v(n);

    for(auto& x:v)
        cin>>x.s>>x.f;

    sort(v.begin(),v.end());
    int res=n-1;
    int g=0;

    for(int i=0;i<n;i++){
        if(v[i].s=='L')
            continue;
        ++g;
        int l=0;
        for(int j=i+1;j<n;j++){
            if(v[j].s=='L')
                ++l;  
        }
        res=min(res,n-g-l);
    }

    //freopen("file.out","w",stdout);
    cout<<res;
    return 0;
}

