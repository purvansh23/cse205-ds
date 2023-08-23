# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // vector<string>& temp1;
        // vector<string>& temp2;
        string ans1;
        string ans2;
        for(int i=0;i<word1.size();i++){
            ans1=ans1+word1[i];
        }
        // temp1=ans1;
        for(int j=0;j<word2.size();j++){
            ans2=ans2+word2[j];
        }
        // temp2=ans2;
        if(ans1==ans2){
            return true;
        }
        else{
            return false;
        }
        
    }
};