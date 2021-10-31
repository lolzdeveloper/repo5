#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='{' or s[i]=='[' or s[i]=='('){
                st.push(s[i]);
            }
            if(st.empty()) return false;
            
            if(s[i] == ')'){
                if(!st.empty() and st.top()=='(') st.pop();
                else return false;
            }
            if(s[i] == '}'){
                if(!st.empty() and st.top()=='{') st.pop();
                else return false;
            }
            
            if(s[i] == ']'){
                if(!st.empty() and st.top() == '[') st.pop();
                else return false;
            }
        }
        
        if(!st.empty()){
            return false;
        }
        
        return true;
    }
};