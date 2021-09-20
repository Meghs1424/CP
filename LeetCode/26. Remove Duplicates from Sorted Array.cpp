class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int k = 0, l = 1;
        while(l < nums.size()) {
            if(nums[k] == nums[l])
                l++;
            else {
                k++;
                nums[k] = nums[l];
            }
        }
        //cout<<k<<'\n';
        return k+1;
    }
};
