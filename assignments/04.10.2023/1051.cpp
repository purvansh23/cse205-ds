class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected= heights;
        for(int i=0;i<heights.size()-1;i++){
            int minindex=i;
            for(int j=i+1;j<heights.size();j++){
                if(heights[j]<heights[minindex]){
                    minindex=j;
                }
            }
            if(minindex!=i){
                swap(heights[minindex],heights[i]);
            }
        }
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i]) count++;
        }
        return count;
    }
};