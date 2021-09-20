class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int check = 0, l=0, i=0;
        while(i < nums.size()) {
            if(nums[l] == val) 
                check ++;
            else 
                l++;
            if(check > 0 && l+check < nums.size())
                nums[l] = nums[check + l];
            i++;
        }
        return i-check;
    }
};
