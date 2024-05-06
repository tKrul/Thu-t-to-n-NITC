#include<bits/stdc++.h>

using namespace std;

int first_number(int n){
    if(n<=5)return n;
    int sum=0,i=0;
    while(5*sum<n){
        sum+=(int)pow(2,i);
        i++;
    }
    sum-=(int)pow(2,i-1);
    return ((n-5*sum)/(int)pow(2,i-1))+1;
}
int main(){
   int n;
   cin>>n;
   cout<<first_number(n);
}
