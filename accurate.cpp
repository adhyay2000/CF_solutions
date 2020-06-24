#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    int last=s.size()-1;
    string ret;
    if(s.size()==1) return s;
    int i;
    for(i=0;i<s.size()-1;i++){
        if(s[i]=='1' && s[i+1]=='0') break;
    }
    if(i==s.size()-1) return s; 
    else{
        if(s[0]=='0' && s[last]=='1'){
            int i=0,c0=0,c1=0;
            while(i<s.size() && s[i++]=='0') c0++;
            i=s.size()-1;
            while(i>=0 && s[i--]=='1') c1++;
            for(int i=0;i<c0;i++) ret.push_back('0');
            ret.push_back('0');
            for(int i=0;i<c1;i++) ret.push_back('1'); 
            return ret;
        }
        else if(s[0]=='0' && s[last]=='0'){
            int i=0,c0=0,c1=0;
            while(i<s.size() && s[i++]=='0') c0++;
            for(int i=0;i<c0;i++) ret.push_back('0');
            ret.push_back('0');
            return ret;
        }
        else if(s[0]=='1' && s[last]=='0'){
            ret.push_back('0');
            return ret;
        }else{
            int c1=0;
            int i=s.size()-1;
            while(i>=0 && s[i--]=='1') c1++;
            ret.push_back('0');
            for(int i=0;i<c1;i++) ret.push_back('1'); 
            return ret;
        }
    }
    return ret;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        string s;
        cin>>s;
        cout << solve(s) << endl;
    }
}