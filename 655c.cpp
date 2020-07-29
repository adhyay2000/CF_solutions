#include<bits/stdc++.h>
using namespace std;
long long find_partition(vector<int>&arr){
    sort(arr.begin(),arr.end());
    
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        vector<int> arr;
        while(num--){
            int tmp;
            cin>> tmp;
            arr.push_back(tmp);
        }
        find_parition(arr);
    }
}