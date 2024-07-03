#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

#define f first
#define s second

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("cownomics.in","r",stdin);
    int n,m;
    cin>>n>>m;
    vector<string> u(n),v(n);

    for(string &s:u)
        cin>>s;
    for(string &s:v)
        cin>>s;

    int res=0;
    
    for(int i=0;i<m;i++){
        set<char> st;
        bool f=true;
        for(int j=0;j<n;j++)
            st.insert(u[j][i]);
        for(int j=0;j<n;j++){
            if(st.find(v[j][i])!=st.end()){
                f=false;
                break;
            }
        }
        if(f)
            ++res;
    }

    freopen("cownomics.out","w",stdout);
    cout<<res;
    return 0;
}

