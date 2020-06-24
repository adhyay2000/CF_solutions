#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k,string s){
    int size=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            for(int j=max(i-k,0);j<=min(i+k,size);j++){
                if(s[j]=='1') continue;
                s[j]='2';
            }
        }
    }
    int count=0;
    for(int i=0;i<s.size();i++){
        while(i<s.size() && s[i]!='0') i++;
        s[i]='3';
        i+=k;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='3') count++;
    }
    cout << count << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin>>s;
        solve(n,k,s);
    }
}