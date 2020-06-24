#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>ret){
    // cout << ret[0] << endl;
    int i=1,j=ret.size()-1;
    int sol[2]={0};
    int alice=ret[0];
    int bob=0;
    int count=1;
    sol[0]=alice;
    sol[1]=bob;
    while(i<=j){
        // cout << "eb" << endl;
        // sol[1]+=bob;
        bob=0;
        // cout << "included" << endl;
        while(bob<=alice && j>=0 && i<=j){
            // cout << ret[j] << endl;
            bob+=ret[j];
            j--;
        }
        // cout << "bob" << bob << endl;
        sol[1]+=bob;
        count++;
        if(j<0 || i>j) break;
        // sol[0]+=alice;
        alice=0;
        // cout << "included" << endl;
        while(alice<=bob && i<ret.size() && i<=j){
            // cout << ret[i] <<  endl;
            alice+=ret[i];
            i++;
        }
        // cout << "alice" << alice << endl;
        sol[0]+=alice;
        count++;
        if(i>=ret.size() || i>j) break;
    }
    cout << count << " " << sol[0] << " " << sol[1]<< endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>> test;
    for(int i=0;i<test;i++){
        int n;
        cin >> n;
        vector<int> ret;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        // cout << ret.size()<< endl;
        solve(ret);
    }
}