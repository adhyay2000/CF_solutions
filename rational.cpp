#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr,vector<int> w){
    sort(arr.begin(),arr.end());
    sort(w.begin(),w.end());
    vector<int> max_val;
    vector<int> min_val;
    for(int i=0;i<w.size();i++){
        if(w[i]==1){
            max_val.push_back(arr[arr.size()-1]);
            min_val.push_back(arr[arr.size()-1]);
            arr.pop_back(); //max
        }else{
            max_val.push_back(arr[arr.size()-1]);
            min_val.push_back(arr[0]);
            arr.pop_back();
            for(int j=0;j<w[i]-1;j++){
                arr.erase(arr.begin()); //min
                // cout << w[i] << endl;
            }
            // for(auto it:arr) cout << it << endl;
        }
    }
    long long int sum=0;
    for(int i=0;i<max_val.size();i++){
        sum+=max_val[i]+min_val[i];
    }
    cout << sum << endl;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            arr.push_back(tmp);
        }
        vector<int> w;
        for(int i=0;i<k;i++){
            int tmp;
            cin>> tmp;
            w.push_back(tmp);
        }
        solve(arr,w);
    }
}