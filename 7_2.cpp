#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    for(int i=0;i<m;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}
