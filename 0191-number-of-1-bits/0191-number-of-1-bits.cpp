class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;//to count
        while(n!=0){
            if(n&1){
                 count++;//non 0 +1
            }
           
             n=n>>1;//right shift
        }
       return count;
    }
};