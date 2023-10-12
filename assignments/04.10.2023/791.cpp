class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        string ans="";
        for(auto it:s){
            mp[it]++;
        }
        for(auto i:order){
            if(mp.find(i)!=mp.end()){
                auto temp=mp.find(i);
                int cnt=temp->second;
                string s(cnt,i);
                ans+=s;
                mp.erase(i);
            }
        }
        for(auto i:mp){
            string s(i.second,i.first);
            ans+=s;
        }
        return ans;
    }
};