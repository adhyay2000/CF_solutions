#include<bits/stdc++.h>
using namespace std;
void solve(int n,int a,int b){
    string s;
    string tmp;
    for(int i=0;i<b;i++){
        tmp.push_back('a'+i);
    }
    for(int i=0;i<n/tmp.size();i++){
        s.append(tmp);
    }
    for(int i=0;i<tmp.size();i++){
        if(s.size()==n) break;
        s.push_back(tmp[i]);
    }
    cout << s << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n,a,b;
        cin >> n >> a >> b;
        solve(n,a,b);
    }
}