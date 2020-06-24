#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        vector<pair<int,int>> arr;
        int num;
        cin >> num;
        for(int j=0;j<num;j++){
            int val;
            cin >> val;
            arr.push_back({val,-1});
        }
        for(int j=0;j<num;j++){
            int type;
            cin >> type;
            arr[j].second = type;
        }
        sort(arr.begin(),arr.end(),[](pair<int,int> a,pair<int,int>b){
            if(a.second==b.second) return false;
            else{
                if(a.first<b.first) return true; 
            }
            return false;
        });
        int j;
        for(j=0;j<num-1;j++){
            if(arr[j].first>arr[j+1].first) {
                break;
            }
        }
        if(j==num-1) cout << "Yes" << endl;
        else cout <<"No"<<endl;
    }
}