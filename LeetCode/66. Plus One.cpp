class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans(digits.size());
        int i;
        int check = 0;
        for(i = digits.size()-1; i>=0; i--) {
            if(check == 1) {
                ans[i] = digits[i];
                continue;
            }
            if(digits[i] == 9 && check == 0){
                ans[i] = 0;
            } 
            else {
                ans[i] = digits[i] + 1;
                check = 1;
            }
        }
        if(check == 0)
            ans.insert(ans.begin(), 1);
        return ans;
    }
};
