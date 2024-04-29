#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i = 0 ; i < n ; i++) 
	cin>>a[i];sort(a,a+n);
	int kt=0,dem=0;
	for(int i = n-1 ; i >= 0 ; i--){
		if(s>=a[i]){
			s-=a[i];
			dem++;
			
		}
		if(s==0) break;
		if(i==0){
            cout<<-1;
            return 0;
        }
	}
	cout<<dem;
	return 0;
	
}
