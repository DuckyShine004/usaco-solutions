#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

typedef int64_t ll;

#define f first
#define s second

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("triangles.in","r",stdin);
    int n,b,h,res=0; cin>>n;
    vector<pair<int,int>> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i].f>>v[i].s;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            for(int k=0;k<n;k++){
                if(i==k||j==k)
                    continue;
                if(v[i].s==v[j].s&&v[j].f==v[k].f){
                    b=fabs(v[j].f-v[i].f);
                    h=fabs(v[k].s-v[j].s);
                    res=max(res,b*h);
                }
            }
        }
    }

    freopen("triangles.out","w",stdout);
    cout<<res;
    return 0;
}
