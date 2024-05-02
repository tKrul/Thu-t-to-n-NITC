#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int maxdiff(vector<int> &a, int l ,int r){
   if(l==r) return 0;
   int mid=(l+r)/2;
   int leftdiff=maxdiff(a,l,mid);
   int rightdiff=maxdiff(a,mid+1,r);
   int minl=a[mid];
   int maxr=a[mid+1];
   for(int i=l;i<=mid;i++){
      minl=min(minl,a[i]);
   }
   for(int i=mid+1;i<=r;i++){
      maxr=max(maxr,a[i]);
   }
   return max(leftdiff,max(rightdiff,maxr-minl));

}
bool decending(vector<int> &a){
   int i=0;
   while(a[i]>a[i+1]&&i<a.size()-1){
      i++;
   }
   if(i==a.size()-1)return true;
   return false;
}
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a.push_back(x);
   }
   if(!decending(a))cout<<maxdiff(a,0,n-1)<<endl;
   else cout<<-1<<endl;
   return 0;
}
