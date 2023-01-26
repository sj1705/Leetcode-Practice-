class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; ;i++){
            if(n==pow(2,i)){
                return 1;
            }
            if(n<pow(2,i)){
                return 0;
            }
        }
    }
};