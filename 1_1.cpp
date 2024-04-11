#include <bits/stdc++.h>
using namespace std;
bool c[1000001];
void snt(int n){
    for(int i=2;i<=n;i++)
        c[i]=1;
    c[0]=0;
    c[1]=0;
    for(int i=2;i*i<=n;i++){
        if(c[i]==1){
            for(int j=i*i;j<=n;j+=i)
                c[j]=0;
        }
    }
}
int gcpd(int a,int b){
    snt(__gcd(a,b));
    for(int i=__gcd(a,b);i>=2;i--){
        if(c[i]&&a%i==0&&b%i==0)
            return i;
    }
    return -1;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcpd(a,b)<<endl;
    return 0;
}
