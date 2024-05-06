#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],max=n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(a[i-1]);
        while(q.top() ==max){
            cout<<q.top()<<" ";
            q.pop();
            max--;
        }
        cout<<endl;
    }
    return 0;
}
