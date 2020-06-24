#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a=n/2;
        int b=a*2;
        cout << __gcd(a,b) << endl;
    }
}