#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef int64_t ll;

#define f first;
#define s second;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //freopen("file.in","r",stdin);
    ll n,k,last_day,res; cin>>n>>k;
    vector<ll> v(n);
    for(ll &x:v)
        cin>>x;

    last_day=v[0];
    res=k+1;

    for(ll d:v){
        // Extend the subscription?
        if(d-last_day<k+1){
            res+=d-last_day;
        }else{
            res+=k+1;
        }
        last_day=d;
    }

    //freopen("file.out","w",stdout);
    cout<<res;
    return 0;
}

