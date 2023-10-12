class Solution {
public:
    int minimumSum(int num) {
        vector <int> v(10,0);
        int copy = num;
        while(copy){
            int rem = copy % 10;
            v[rem] += 1;
            copy /= 10;
        }
        int count = 2;
        int ans = 0;
        for( int i = 0; i < 10; i++ ){
            while( v[i] != 0 ){
                if(count > 0){
                    ans += i * 10;
                    count -= 1;
                }
                else{
                    ans += i;
                }
                v[i] -= 1;
            }
        }
        return ans;
    }
};