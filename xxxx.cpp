#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int x){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    if(sum%x!=0){
        cout << arr.size() << endl;
        return;
    }
    int sum2=sum;
    int prefix_count=0,suffix_count=0;
    for(int i=0;i<arr.size();i++){
        if(sum%x!=0) break;
        sum-=arr[i];
        prefix_count++;
    }
    if(prefix_count==arr.size()){
        cout << -1 << endl;
        return;
    }
    for(int j=arr.size()-1;j>=0;j--){
        if(sum2%x!=0) break;
        sum2-=arr[j];
        suffix_count++;
    }
    cout << arr.size()-min(prefix_count,suffix_count) << endl;
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        solve(arr,x);
    }
}