class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        stack<char> res;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*' && !st.empty()){
                st.pop();
            }
            else if(s[i]!='*'){
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            char ch=st.top();
            res.push(ch);
            st.pop();
        }
        string ans="";
        while(!res.empty()){
            char ch=res.top();
            ans.push_back(ch);
            res.pop();
        }
        return ans;
        

    }
};