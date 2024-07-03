#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

void dbg(const vector<int>& v){
    for(int x:v)
        cout<<x<<' ';
    cout<<'\n';
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,s; cin>>n;
    vector<int> v(n);

    for(int &x:v)
        cin>>x;

    int res=0;
    double avg;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s=0;
            for(int k=i;k<=j;k++)
                s+=v[k];
            avg=(double)s/(j-i+1);
            for(int k=i;k<=j;k++){
                if(v[k]==avg){
                    ++res;
                    break;
                }
            }
        }
    }
    cout<<res;

    return 0;
}

