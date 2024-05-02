#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n;
int longest(vector<int> &a ){
    if(n==0)return 0;
    vector<int> l(n,1);
    for(int i=1; i<n; i++){
        for(int j=0;j<i; j++){
            if(a[i]>a[j]){
                l[i]=max(l[i],l[j]+1);
            }
        }
    }
    return *max_element(l.begin(),l.end());
}
int main() {
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<longest(a)<<endl;
    return 0;
}

