#include <bits/stdc++.h>
using namespace std;
const int MAX =20;
int n,bc,cc;
int vs[MAX],c[MAX][MAX],x[MAX];
void enter(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
        }
    }
    bc=1e9+7;
    cc=0;
    vs[1]=1;
    x[1]=1;
}
void Try(int i){
    cout<<bc<<endl;
    for(int j=2;j<=n;j++){
        if(vs[j]==0){
            x[i]=j;
            vs[j]=1;
            cc+=c[x[i-1]][j];
            if(i==n){
                if(cc+c[j][1]<bc)bc=cc+c[j][1];
            }
            else if(cc<bc){Try(i+1);}
            vs[j]=0;
            cc-=c[x[i-1]][j];
        }   
    }
}
 int main(){

    enter();
    Try(2);
    cout<<bc<<endl;
    return 0;
}
