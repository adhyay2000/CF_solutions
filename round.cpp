#include<bits/stdc++.h>
using namespace std;
void solve(int num){
    int tmp;
    vector<int> ret;
    int factor=1;
    while(num!=0){
        tmp=num%10;
        if(tmp!=0) ret.push_back(tmp*factor);
        num=num/10;
        factor*=10; 
    }
    cout<< ret.size() << endl;
    for(auto it:ret){
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>> test;
    for(int i=0;i<test;i++){
        int tmp;
        cin >> tmp;
        solve(tmp);
    }
}