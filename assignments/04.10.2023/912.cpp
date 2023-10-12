class Solution {
public:
    vector<int> mergesort(vector<int> &nums){
        if(nums.size()==1) return nums;

        int mid=nums.size()/2;
        vector<int> merge1;
        vector<int> merge2;
        for(int i=0;i<mid;i++){
            merge1.push_back(nums[i]);
        }
        for(int i=mid;i<nums.size();i++){
            merge2.push_back(nums[i]);
        }

        merge1=mergesort(merge1);
        merge2=mergesort(merge2);
        int a=0,b=0,c=0;
        while(c<nums.size()){
            if(a==merge1.size()){
                nums[c]=merge2[b];
                b++;
                c++;
                continue;
            }
            if(b==merge2.size()){
                nums[c]=merge1[a];
                a++;
                c++;
                continue;
            }
            if(merge1[a]<merge2[b]){
                nums[c]=merge1[a];
                a++;
                c++;
            }
            else{
                nums[c]=merge2[b];
                b++;
                c++;
            }
        }
        return nums;
    }

    vector<int> sortArray(vector<int>& nums1) {
        return mergesort(nums1);
    }
};