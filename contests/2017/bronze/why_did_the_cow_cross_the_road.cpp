#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

#define f first
#define s second

const int n=52;
const int k=26;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("circlecross.in","r",stdin);
    string s; cin>>s;
    int res=0;
    map<char,pair<int,int>> mp;

    for(int i=0;i<n;i++){
        if(mp.find(s[i])==mp.end()){
            mp[s[i]]={i,i};
        }else{
            mp[s[i]].s=i;
        }
    }

    for(auto& p:mp){
        for(auto& q:mp){
            if(p.s.f==q.s.f)
                continue;
            if(q.s.f>p.s.f&&q.s.f<p.s.s&&q.s.s>p.s.s)
                ++res;
        }
    }

    freopen("circlecross.out","w",stdout);
    cout<<res;
    return 0;
}

