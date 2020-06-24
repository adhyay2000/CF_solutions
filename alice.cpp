#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    if(s.size()==2) {
        cout << s<< endl;
        return;
    }
    string tmp;
    tmp.push_back(s[0]);
    for(int i=1;i<s.size()-1;i=i+2){
        tmp.push_back(s[i]);
    }
    tmp.push_back(s.back());
    cout << tmp<< endl;
    return;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}