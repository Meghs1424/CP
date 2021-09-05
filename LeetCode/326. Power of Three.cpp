class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n>1){
            if(n%3 != 0)
                break;
            else
                n /= 3;
        }
        if(n == 1)
            return true;
        else 
            return false;
    }
};
