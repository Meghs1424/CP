class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN, sum;
        for(int i=0; i<nums.size() - 1; i++) {
            sum = nums[i];
            for(int j=i+1; j<nums.size(); j++) {
                sum += nums[j];
                if(sum > max)
                    max = sum;
            }
        }
        if(*max_element(nums.begin(), nums.end()) > max)
            max = *max_element(nums.begin(), nums.end());
        return max;
    }
};
