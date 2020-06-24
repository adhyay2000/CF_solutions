#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> adj,map<pair<int,int>,int> mp){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n=adj.size();
    vector<int> d(n+1,INT_MAX);
    vector<int> p(n+1,-1);
    d[1]=0;
    vector<int> u(n+1,false);
    int a=-1,b=-1,c=-1;
    for(int i=1;i<n+1;i++){
        int v=-1;
        for(int j=1;j<=n;j++){
            //find minimum weight unmarked vertex
            if(!u[j] && (v==-1 || d[j]<d[v])){
                v=j;
            }
        }
        if(d[v]==INT_MAX) break;
        u[v]=true;
        if(a==-1) a=v;
        else if(b==-1) b=v;
        else{
            a=b;
            b=v;
        }
        for(auto dest:adj[v]){
            int to=dest;
            if(mp.find(make_pair(a,b))!=mp.end()){
                if(mp[make_pair(a,b)]==to) continue;
            }
            if(d[v]+1<d[to]){
                d[to]=d[v]+1;
                p[to]=v;
            }
        }
    }
    for(auto it:p){
        cout << it << endl;
    }
    cout << " " << endl;
    for(auto it:d){
        cout << it << endl;
    }
    if(d[n]==INT_MAX){
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    for(int v=n-1;v!=1;v=p[v]){
        path.push_back(v);
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    cout << path.size()-1 << endl;
    for(auto it:path){
        cout << it << endl;
    }
    return;
}
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> adj(n+1,vector<int>(0));
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    map<pair<int,int>,int> mp;
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
        mp[make_pair(a,b)]=c;
    }
    solve(adj,mp);
}