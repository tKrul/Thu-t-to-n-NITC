#include <bits/stdc++.h>
using namespace std;
string kq(int n){
    string ans="";
    for(int i=9;i>=2;i--){ 
        while(n%i==0){
            ans+=to_string(i);
            n/=i;
        }
    }
    reverse(ans.begin(), ans.end());
    return n>1?"-1":ans;
}

int main(){
    long long pro;
    cin>>pro;
    cout<<kq(pro);
    return 0;
}
