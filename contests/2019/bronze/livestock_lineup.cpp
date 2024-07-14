#include<iostream>
#include<vector>
#include<sstream>
#include<cstring>
#include<algorithm>
#include<map>
#include<limits>
#include<queue>

using namespace std;

typedef int64_t ll;

const int k=8;
const int l=6;
int vis[k];

vector<string> split(string s){
    stringstream ss(s);
    string cur;
    vector<string> res;

    while(ss>>cur)
        res.push_back(cur);

    return res;
}

void dbg(const vector<vector<int>>& v){
    for(int i=0;i<k;i++){
        cout<<i<<": {";
        for(int x:v[i])
            cout<<x<<",";
        cout<<"}\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("lineup.in","r",stdin);
    int n,u,t; cin>>n; cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string cur;
    map<string,int> mp;
    vector<vector<int>> adj(k);
    vector<string> res,v={"Beatrice","Belinda","Bella","Bessie","Betsy","Blue","Buttercup","Sue"};

    memset(vis,0,sizeof(vis));

    for(int i=0;i<k;i++)
        mp[v[i]]=i;

    for(int i=0;i<n;i++){
        getline(cin,cur);
        vector<string> sp=split(cur);
        u=mp[sp[0]]; t=mp[sp[l-1]];

        if(u<t){
            adj[u].push_back(t);
        }else{
            adj[t].push_back(u);
        }
    }

    for(auto& x:adj)
        sort(x.begin(),x.end());

    //dbg(adj&&!vis[i]);

    for(int i=0;i<k;i++){
        if(adj[i].empty()&&!vis[i]){
            res.push_back(v[i]);
            continue;
        }

        if(vis[i])
            continue;

        queue<int> q;
        q.push(i);
        vis[i]=1;

        while(!q.empty()){
            int qs=q.size();
            for(int j=0;j<qs;j++){
                int no=q.front();
                q.pop();
                res.push_back(v[no]);
                
                for(int x:adj[no]){
                    if(!vis[x]){
                        q.push(x);
                        vis[x]=1;
                    }
                }
            }
        }
    }


    freopen("lineup.out","w",stdout);
    for(string s:res)
        cout<<s<<'\n';
    return 0;
}

