#include <bits/stdc++.h>

using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b){
    return a.second < b.second;
}
int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > x;
    vector<pair<int, int> > y;
    for (int i = 0; i < n; i++) {
       int s,e;
       cin >> s >> e;
        x.push_back(make_pair(s,e));
    }
    sort(x.begin(), x.end(), comp);
    y.push_back(x[0]);
    for(int i=1;i<n;i++) {
        if(x[i].first>y.back().second) {
            y.push_back(x[i]);
        }
    }
    cout<<y.size()<<endl;
    return 0;
}
