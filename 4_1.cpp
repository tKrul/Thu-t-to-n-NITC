#include <bits/stdc++.h>
using namespace std;
int a[100],n,stop=0;
void khoitao(){
   for(int i=0;i<n;i++){
    a[i]=0;
   } 
}
void xuatmang(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sinh(){
    int i=n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==-1)stop=1;
    else a[i]=1;
}
void chay(){
    while(stop==0){
        xuatmang();
        sinh();
    }
}
int main(){   
    cin>>n;
    khoitao(); 
    chay();
    
    return 0;
}
