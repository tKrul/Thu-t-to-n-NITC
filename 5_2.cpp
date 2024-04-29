#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> col;
bool check(int x,int y){
    for(int i=1;i<x;i++){
        if(col[i]==y||abs(col[i]-y)==abs(i-x))
            return false;
    }
    return true;
}
void queenCheck(int x){
    if(x>n){
        for(int i=1;i<=n;i++){
            cout<<i<<" "<<col[i]<<endl;
        }
        cout<<endl;
        return;
    }
    for(int y=1;y<=n;y++){
        if(check(x,y)){
            col[x]=y;
            queenCheck(x+1);
        }
    }
}

int main(){
    cin>>n;
    col.resize(n+1);
    queenCheck(1);
    return 0;

}
