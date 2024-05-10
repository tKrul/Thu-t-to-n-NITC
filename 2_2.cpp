#include<bits/stdc++.h>
using namespace std;
string rut(string &s){
    while(s!=""){
        if((int)(s[0]-'0')%3==0) {
            s.erase(0,1); 
        }
        else if((int)(s[s.size()-1]-'0')%3==0) {
            s.erase(s.size()-1,1);
        }
        else if((int)(s[0]-'0'+s[s.size()-1]-'0')%3==0) {
            s.erase(0,1);
            s.erase(s.size()-1,1);
        }
        else{
            break;
        }
    }
    return s;
}
int main (){
    string s;
    cin>>s;
    cout<<rut(s)<<endl;
    return 0;
}
