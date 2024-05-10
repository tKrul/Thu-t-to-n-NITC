    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n,m;
        cin>>n>>m;
        vector<vector<int> > a(n+1);
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int j=0;j<a[i].size();j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
