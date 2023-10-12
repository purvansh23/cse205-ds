class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> m;
        pair<int,int>p;
        
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:m){
            pq.push({it.second , it.first});
        }
        int c=0 , cs=arr.size();
        while(!pq.empty()){
            p=pq.top();
            pq.pop();
            int elem=p.second;
            int fr=p.first;
            
            c++;
            
            cs-=fr;
            if(cs<=arr.size()/2) return c;
        }
        return c;
    }
};