#include <bits/stdc++.h>

using namespace std;
int m,n,a[100][100];
string path="";
void findpath(int i,int j,string path){
    if(i==m-1&&j==n-1){
        cout<<path<<endl;
        return;
    }
    if(j+1<n&&a[i][j+1]==1){
        findpath(i,j+1,path+"R");
    }
    if(i+1<m&&a[i+1][j]==1){
        findpath(i+1,j,path+"D");
    }
    return;
}
int main() {
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    findpath(0,0,path);
    return 0;
}
