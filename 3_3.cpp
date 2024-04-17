#include <bits/stdc++.h>
using namespace std;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int a[100][100];
void loang(int x,int y,int &vl,int n,int m){
    if(vl==n*m) return;
    for(int k=0;k<4;k++){
        int i=x+dx[k],j=y+dy[k];
        if(i>=0&&i<n&&j>=0&&j<m&&a[i][j]==vl){
            vl++;
            loang(i,j,vl,n,m);
            break;
        }
    } 
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>a[i][j];
        }
    }
    int vl=1;
    int x=-1,y=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==vl){
                x=i;y=j;
            }
        }
    }
    vl++;
    loang(x,y,vl,n,m);
    if(vl==n*m)cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;

}
