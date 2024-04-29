#include <bits/stdc++.h>
using namespace std;
int a[100],n,c,stop=0;
int b[100];
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
    int max=0;
    while(stop==0){
        sinh();
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)sum+=b[i];
        }
        if(sum>max&&sum<=c)max=sum;
    }
    cout<<max;
}
int main(){   
    cin>>c>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    khoitao(); 
    chay();
    
    return 0;
}
