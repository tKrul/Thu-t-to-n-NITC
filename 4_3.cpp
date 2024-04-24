#include <bits/stdc++.h>
using  namespace std;
int n,k,stop=0,a[100];
void khoitao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void xuat(){
    for(int i=1;i<=k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i)i--;
    if(i==0){
        stop=1;
    }
    else {
        a[i]++;
        int p=a[i];
        while(i<=k)a[i++]=p++;

    }
}
void chay(){
    while(!stop){
        xuat();
        sinh();
    }
}
int main(){
    cin>>n>>k;
    khoitao();
    chay();
    return 0;
}
