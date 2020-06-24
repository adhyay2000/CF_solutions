#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k){
    //try to write n or n+k as a sum of k even number
    if(n%2!=0 && k%2!=0){
        //use only odds
    }
    if(n%2!=0 && k%2==0){
        cout << "NO" << endl;
        return;
    }
    if(n%2==0 && k%2!=0){
        //use only evens
    }
    if(n%2==0 && k%2==0){
        //use both
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>> test;
    for(int i=0;i<test;i++){
        int n,k;
        cin >> n>>k;
        solve(n,k);
    }
}