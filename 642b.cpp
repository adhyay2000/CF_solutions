#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr,vector<int> brr,int k){
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    reverse(arr.begin(),arr.end());
    int count=0;
    for(int i=arr.size()-1;i>=0;i--){
        if(count==k) break;
        if(arr[i]>=brr[brr.size()-1]) break;
        arr[i]=brr[brr.size()-1];
        brr.pop_back();
        count++;
    }
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    cout <<sum <<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr,brr;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            arr.push_back(tmp);
        }
        for(int j=0;j<n;j++){
            int tmp;
            cin>>tmp;
            brr.push_back(tmp);
        }
        solve(arr,brr,k);
    }
}