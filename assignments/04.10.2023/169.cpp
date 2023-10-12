class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int elem=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(count==0){
                elem=arr[i];
            }
            count+=(elem==arr[i])?1:-1;
        }
        return elem;
    }
};