#include<bits/stdc++.h>
using namespace std;
int dem(string s){
    int a[2]={2,-2},b[2]={1,-1},d=0,x=s[0]-96,y=s[1]-48;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if((x+a[i]<=8&&x+a[i]>=1)&&(y+b[j]>=1&&y+b[j]<=8))d++;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if((x+b[i]<=8&&x+b[i]>=1)&&(y+a[j]>=1&&y+a[j]<=8))d++;
        }
    }

    return d;
}
int main(){
    string s;
    cin>>s;
    cout<<dem(s);
    return 0;
}
