#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> ret){
    int odd=0,even=0;
    for(int i=0;i<ret.size();i++){
        if(i%2!=ret[i]%2){
            if(i%2==0) even++;
            else odd++;
        }
    }
    if(odd!=even) cout << -1 << endl;
    else cout << odd << endl;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> tmp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            tmp.push_back(a);
        }
        solve(tmp);
    }
}