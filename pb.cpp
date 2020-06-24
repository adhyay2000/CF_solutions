#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int tmp;
        cin >> tmp;
        int ret = 2*(pow(2,tmp/2)-1);
        cout << ret << endl;
    }
}