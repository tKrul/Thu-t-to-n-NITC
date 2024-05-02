#include <bits/stdc++.h>
using namespace std;
vector<string> s;
string lcp_2_string(string x,string y){
    int d=0;
    for(int i=0,j=0;i<x.size()&&j<y.size();i++,j++){
        if(x[i]!=y[j]){
            break;
        }
        d++;
    }
    return x.substr(0,d);
}
string lcp_n_string(vector<string> &s,int l,int r){
   if(l==r) return s[l];
   if(l<r){
    int mid=(l+r)/2;
    string x=lcp_n_string(s,l,mid);
    string y=lcp_n_string(s,mid+1,r);
    return lcp_2_string(x,y);
   } 
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.push_back(x);
    }
    cout<<lcp_n_string(s,0,s.size()-1)<<endl;
    return 0;
}
