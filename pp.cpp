#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> arr){
    int count=0;
    for(int i=0;i<arr.size()/2;i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]!=arr[arr.size()-1-i][arr[0].size()-1-j]) count++;
        }
    }
    if(arr[0].size()%2!=0){
        for(int i=0;i<arr.size()/2;i++){
            if(arr[arr[0].size()/2][i]!=arr[arr[0].size()/2][arr.size()-1-i]) count++;
        }
    }
    cout << count << endl;
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            vector<int> tmp;
            for(int j=0;j<m;j++){
                int a;
                cin >> a;
                tmp.push_back(a);
            }
            arr.push_back(tmp);
        }
        solve(arr);
    }
}