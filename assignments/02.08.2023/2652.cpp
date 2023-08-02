class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if((i%3==0)||(i%5==0)||(i%7==0)){
                sum=sum+i;
            }
            // else if((n%3==0)&&(n%5==0)){

            // }
        }
        return sum;
    }
};