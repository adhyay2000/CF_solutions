#include<bits/stdc++.h>
using namespace std;
void solve(int a,int b,int c){
    string s="";
    string tmp;
    if(c!=0) s.append(string(c+1,'1'));
    if(a!=0) s.append(string(a+1,'0'));
    for(int i=0;i<b-1;i++){
        tmp.append("01");
    }
    tmp.append(s);
    cout << tmp << endl;
}
int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
}