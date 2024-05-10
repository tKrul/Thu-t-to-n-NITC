    #include<bits/stdc++.h>
    using namespace std;
    vector<vector<int> > a(100);
    vector<int> vs(100,0);
    void dfs(int u){
        cout << u <<" ";
        vs[u] = 1;
        for(int i=0;i<a[u].size();i++)
            if(vs[a[u][i]]==0)
                dfs(a[u][i]);
    }
    int main(){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        dfs(1);
        return 0;
    }
