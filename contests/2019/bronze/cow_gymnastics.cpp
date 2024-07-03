#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;
#define f first
#define s second

void dbg(const vector<vector<int>>& v){
    for(auto& x:v){
        for(int p:x){
            cout<<p<<' ';
        }
        cout<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("gymnastics.in","r",stdin);
    int k,n,p; cin>>k>>n;
    vector<vector<int>> v(k,vector<int>(n));

    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>p;
            v[i][p-1]=j;
        }
    }

    int res=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            bool f=true;
            for(int x=0;x<k;x++){
                if(v[x][i]>v[x][j]){
                    f=false;
                    break;
                }
            }

            if(f)
                ++res;
        }
    }
    //dbg(v);
    freopen("gymnastics.out","w",stdout);
    cout<<res;
    return 0;
}

