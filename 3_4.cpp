#include<bits/stdc++.h>
using namespace std;
int tcs(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
bool cmp(int a, int b){
    if(tcs(a)==tcs(b))return a<b;
    return tcs(a)<tcs(b);
}
int main (){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0; 
}
