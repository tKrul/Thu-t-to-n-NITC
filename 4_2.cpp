#include <bits/stdc++.h>
using  namespace std;
int n,stop=0,a[100];
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void xuat(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void chay(){
    int i=n-1;
    while(i>0&&a[i]>=a[i+1]){
        i--;
    }
    if(i==0){
        stop=1;
        return;
    }
    else {
        int j=n;
        while(a[i]>a[j])j--;
        swap(a[i],a[j]);
        int l=i+1,r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}

int main(){
    cin>>n;
    khoitao();
    while(!stop){
        xuat();
        chay();
    }
    return 0;
}
