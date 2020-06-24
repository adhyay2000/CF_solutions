#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> arr,int n,int x){
    int l=-1,r=-1;
    int i;
    for(i=0;i<arr.size();i++){
        if(arr[i][0]<=x && arr[i][1]>=x){
            l=arr[i][0];
            r=arr[i][1];
            break;
        }
    }
    // cout << l << r << endl;
    if(l==-1 && r==-1){
        cout << 1 << endl;
        return;
    }
    // cout << i << endl;
    for(;i<arr.size();i++){
        if(arr[i][0]<=r){
            r=max(arr[i][1],r);
        }
        if(l<=arr[i][1]){
            l=min(arr[i][0],l);
        }
    }
    cout << r-l+1 << endl;
    return;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,x,m;
        cin >> n >> x >> m;
        vector<vector<int>> arr;
        for(int i=0;i<m;i++){
            vector<int> tmp;
            int l,r;
            cin >> l >> r;
            tmp.push_back(l);
            tmp.push_back(r);
            arr.push_back(tmp);
        }
        solve(arr,n,x);
    }
}