#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mtx(int n){
    vector<vector<int> > a;
    vector<int> b;
    for(int i=0;i<n;i++)
        b.push_back(0);
    for(int i=0;i<n;i++)
        a.push_back(b);
    int x=0,y=n-1,vl=0;
    while(vl<n*n){
        for(int i=x;i<=y;i++){vl++;a[x][i]=vl;}
        for(int i=x+1;i<=y;i++){vl++;a[i][y]=vl;}
        for(int i=y-1;i>=x;i--){vl++;a[y][i]=vl;}
        for(int i=y-1;i>=x+1;i--){vl++;a[i][x]=vl;}
        x++;y--;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> b=mtx(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
