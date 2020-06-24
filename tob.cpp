#include<bits/stdc++.h>
using namespace std;
void solve(string s,vector<int> arr){
    
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int m;
        cin>>m;
        vector<int> arr;
        for(int i=0;i<m;i++){
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        solve(s,arr);
    }
}