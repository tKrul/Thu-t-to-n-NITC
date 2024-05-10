    #include<bits/stdc++.h>
    using namespace std;
    vector<vector<int> > a(100);
    vector<int> vs(100,0);
    void bfs(int u){
        queue<int> q;
        q.push(u);
        vs[u]=1;
        while(!q.empty()){
            u=q.front();
            cout<<u<<" ";
            q.pop();
            for(auto i:a[u]){
                if(vs[i]==0){
                    q.push(i);
                    vs[i]=1;
                }
            }
        }
        return;
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
        bfs(1);
        return 0;
    }
