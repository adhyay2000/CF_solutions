#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<pair<int,int>>> adj){
    int n=adj.size();
    vector<int> d(n,INT_MAX);
    vector<int> p(n,-1);
    vector<bool> u(n,false);
    d[0]=0;
    for(int i=0;i<n;i++){
        // cout << i << endl;
        int v=-1;
        for(int j=0;j<n;j++){
            if(!u[j] && (v==-1 || d[j]<d[v])){
                v=j;
            }
        }
        u[v]=true;
        if(d[v]==INT_MAX) break;
        for(auto edges:adj[v]){
            int to=edges.first;
            int len = edges.second;
            if(d[v]+len<d[to]){
                d[to]=d[v]+len;
                p[to]=v;
            }
        }
    }
    // for(auto it:d) cout << it << endl;
    // cout << endl;
    // for(auto it:p) cout << it << endl;
    if(p[n-1]==-1){
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    for(int i=n-1;i!=0;i=p[i]){
        path.push_back(i+1);
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    for(auto it:path) cout << it <<" ";
    cout << endl;
    return;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n,vector<pair<int,int>>(0));
    for(int i=0;i<m;i++){
        int from,to,w;
        cin>>from >> to >> w;
        adj[from-1].push_back({to-1,w});
        adj[to-1].push_back({from-1,w});
    }
    solve(adj);
}