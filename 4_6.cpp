#include <bits/stdc++.h>
using namespace std;
void ptps(int a,int b){
    if(a==0&&b==0)return;
    if(b%a==0){
        cout<<1<<"/"<<b/a;
        return;
    }
    int x=b/a +1;
    cout<<1<<"/"<<x;
    cout<<endl;
    ptps(a*x-b,b*x);
}
int main(){
    int a,b;
    cin>>a>>b;
    ptps(a,b);
    return 0;
}
