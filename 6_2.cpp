#include<bits/stdc++.h>
using namespace std;

string giama(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]!=']'){
            st.push(s[i]);
        }
        else {
            string temp="";
            while(st.top()!='['){
                temp+=st.top();
                st.pop();
            }
            st.pop();
            string num="";
            while(!st.empty()&&isdigit(st.top())) {
                num=st.top()+num;
                st.pop();
            }
            int k=stoi(num);
                for(int i=0;i<k;i++){
                    for(int j=temp.length()-1;j>=0;j--){
                        st.push(temp[j]);
                    }
                }
            }
        }
    string res="";
    while(!st.empty()){
        res=st.top()+res;
        st.pop();
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    cout<<giama(s)<<endl;
    return 0;
}
