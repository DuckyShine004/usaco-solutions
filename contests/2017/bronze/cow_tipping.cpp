#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

#define f first
#define s second

void toggle(vector<int>& masks,int i,int j){
    int k=(1<<(j+1))-1;
    for(int y=0;y<=i;y++)
        masks[y]^=k;
}

void dbg(vector<int>& masks){
    string bin;
    for(int x:masks){
        bin=bitset<32>(x).to_string();
        reverse(bin.begin(),bin.end());
        cout<<bin<<'\n';
    }
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("cowtip.in","r",stdin);
    int n,res=0; cin>>n;
    string s;
    vector<int> masks(n,0);

    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='1')
                masks[i]|=(1<<j);
        }
    }

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(masks[i]&(1<<j)){
                toggle(masks,i,j);
                ++res;
            }
            //dbg(masks);
        }
    }

    freopen("cowtip.out","w",stdout);
    cout<<res;
    return 0;
}

