#include<bits/stdc++.h>
using namespace std;    
bool daungoac(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        if(s[i]==')'||s[i]==']'||s[i]=='}'){
            if(st.empty()){
                return false;
            }
            if(s[i]==')'&&st.top()!='('){
                return false;
            }
            if(s[i]==']'&&st.top()!='['){
                return false;
            }
            if(s[i]=='}'&&st.top()!='{'){
                return false;
            }
            st.pop();
        }
    }
    if(st.empty()){
        return true;
    }
    return false; 
}
int main(){
    string s;
    while(getline(cin, s)){
        if(s==".")break;
        if(daungoac(s)){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<endl;
    }
    return 0;
}
