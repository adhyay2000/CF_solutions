#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
}