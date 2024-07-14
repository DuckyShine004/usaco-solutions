#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

#define f first
#define s second

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("breedflip.in","r",stdin);
    int n,i,j,res; string s,t; cin>>n>>s>>t;
    res=i=0;

    while(i<n){
        if(s[i]==t[i]){
            ++i;
            continue;
        }
        j=i;
        while(j<n&&s[j]!=t[j]){
            ++j;
        }
        ++res;
        i=j;
    }

    freopen("breedflip.out","w",stdout);
    cout<<res;
    return 0;
}

