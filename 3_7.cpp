#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        if(a[i]!=-1)b.push_back(a[i]);
    }
    sort(b.begin(),b.end(),comp);
    for(int i=0;i<n;i++){
        if(a[i]!=-1) {
            a[i] = b.back();
            b.pop_back();
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
