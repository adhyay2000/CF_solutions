#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int a,b;
        cin >> a>>b;
        if(a==1||b==1){
            cout << "YES" << endl;
        }else if(a==2&&b==2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}