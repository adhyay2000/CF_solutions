#include<bits/stdc++.h>
using namespace std;
void fill_row(vector<vector<int>>&arr,int i){
    for(int j=0;j<arr[i].size();j++){
        arr[i][j]=1;
    }
}
void unfill_row(vector<vector<int>>&arr,int i){
    for(int j=0;j<arr[i].size();j++){
        arr[i][j]=0;
    }
}
void fill_col(vector<vector<int>>&arr,int j){
    for(int i=0;i<arr.size();i++){
        arr[i][j]=1;
    }
}
void unfill_col(vector<vector<int>>&arr,int j){
    for(int i=0;i<arr.size();i++){
        arr[i][j]=0;
    }
}
bool solve(vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]!=0) continue;
            fill_row(arr,i);
            fill_col(arr,j);
            if(solve(arr)==false) return true;
            unfill_row(arr,i);
            unfill_col(arr,j);
        }
    }
    return false;
}
void prefill(vector<vector<int>>&arr){
    vector<pair<int,int>> ret;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==1){
                ret.push_back({i,j});
            }
        }
    }
    for(int i=0;i<ret.size();i++){
        fill_row(arr,ret[i].first);
        fill_col(arr,ret[i].second);
    }
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            vector<int> brr;
            for(int j=0;j<m;j++){
                int tmp;
                cin >> tmp;
                brr.push_back(tmp);
            }
            arr.push_back(brr);
        }
        prefill(arr);
        bool result= solve(arr);
        if(result) cout << "Ashish" << endl;
        else cout << "Vivek" << endl;
    }
}