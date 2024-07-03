#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("pails.in","r",stdin);
    int x,y,m; cin>>x>>y>>m;
    int res=0,k=m/x,l=m/y;

    for(int i=0;i<=k;i++){
        for(int j=0;j<=l;j++){
            int d=i*x+j*y;
            if(d<=m&&d>res)
                res=d;
        }
    }
    freopen("pails.out","w",stdout);
    cout<<res;
    return 0;
}
