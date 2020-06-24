#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b){
    // if(mp.find(make_pair(a,b))!=mp.end()) return mp[make_pair(a,b)];
    // if(a<0||b<0) return 0;
    // else if(a==0 || b==0) return 1;
    // if(a<b){
    //     a--;
    //     b-=2;
    // }else{
    //     b--;
    //     a-=2;
    // }
    // mp[make_pair(a,b)]=solve(a,b)+1;
    // return mp[make_pair(a,b)];
    if(a>=2*b) return b;
    else if(b>=2*a) return a;
    else return (a+b)/3;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << solve(a,b)<< endl;
    }
}