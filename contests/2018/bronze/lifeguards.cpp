#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int64_t ll;
#define f first
#define s second

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("lifeguards.in","r",stdin);
    int n; cin>>n;
    vector<pair<int,int>> v(n);

    for(auto& x:v)
        cin>>x.f>>x.s;

    sort(v.begin(),v.end()); 
    int res=0;

    for(int i=0;i<n;i++){
        int cur=0,r=-1;
        for(int j=0;j<n;j++){
            if(i==j||v[j].s<=r)
                continue;
            if(v[j].f>r){
                cur+=v[j].s-v[j].f;
            }else{
                cur+=v[j].s-r;
            }
            r=max(r,v[j].s);
        }
        res=max(res,cur);
    }

    freopen("lifeguards.out","w",stdout);
    cout<<res;
    return 0;
}

