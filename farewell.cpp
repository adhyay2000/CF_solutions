#include<bits/stdc++.h>
#define ios cin.tie(NULL); cin.sync_with_stdio(false);
using namespace std;
void solve(int n,int m,int x,int y){
    int row=0,col=0;
    vector<vector<int>> ret(4,vector<int>(2));
    for(int i=0;i<4;i++){
        ret[i][0]=x;
        ret[i][1]=y;
    }
    vector<int> a;
    while(1){
        int i=x;
        while(i!=1){
            a.push_back(i);
            i--;
        }
        while(i!=n){
            a.push_back(i);
            i++;
        }
        while(i!=x){
            a.push_back(i);
            i--;
        }
        if(i==x) break;
    }
    vector<int> b;
    while(1){
        int i=x;
        while(i!=n){
            b.push_back(i);
            i++;
        }
        while(i!=1){
            b.push_back(i);
            i--;
        }
        while(i!=x){
            b.push_back(i);
            i++;
        }
        if(i==x) break;
    }
    vector<int> c;
    while(1){
        int i=x;
        while(i!=1){
            a.push_back(i);
            i--;
        }
        while(i!=n){
            a.push_back(i);
            i++;
        }
        while(i!=x){
            a.push_back(i);
            i--;
        }
        if(i==x) break;
    }
    while(1){
        int i=x;
        while(i!=1){
            a.push_back(i);
            i--;
        }
        while(i!=n){
            a.push_back(i);
            i++;
        }
        while(i!=x){
            a.push_back(i);
            i--;
        }
        if(i==x) break;
    }
    // ret[0][2]=0;
    // ret[1][2]=1;
    // ret[2][2]=1;
    // ret[3][2]=0;
    while(col!=n){
        if(ret[0][0]==row && ret[0][1]==col){
            cout << "BesWishes" << endl;
            return;
        } 
        if(ret[1][0]==row && ret[1][1]==col){
            cout << "BesWishes" << endl;
            return;
        } 
        if(ret[2][0]==row && ret[2][1]==col){
            cout << "BesWishes" << endl;
            return;
        } 
        if(ret[3][0]==row && ret[3][1]==col){
            cout << "BesWishes" << endl;
            return;
        }

    }
    while(row!=m){
        row++;
    }
}
int main(){
    ios
    int t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        solve(n,m,x,y);
    }
}