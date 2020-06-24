#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,deque<int> &brr){
    int max_pair=0;
    for(int i=0;i<arr.size();i++){
        int count=0;
        for(int i=0;i<brr.size();i++){
            // cout<< arr[i] << brr.front() << endl;
            if(arr[i]==brr.front()) count++;
            brr.push_back(brr.front());
            brr.pop_front();  
        }
        // cout << count<<endl;
        // cout << "------" << endl;
        brr.push_back(brr.front());
        brr.pop_front();
        max_pair = max(max_pair,count);
    }
    return max_pair;
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int size;
    cin >> size;
    vector<int> arr;
    deque<int> brr;
    for(int i=0;i<size;i++){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    for(int i=0;i<size;i++){
        int tmp;
        cin >> tmp;
        brr.push_back(tmp);
    }
    cout << solve(arr,brr) << endl;
}