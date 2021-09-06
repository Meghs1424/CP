class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int a = x;
        long r = x%10;
        x = x/10;
        while(x!=0){
            r = 10*r + x%10;
            x = x/10;
        }
        if(a == r)
            return true;
        return false;
    }
};
