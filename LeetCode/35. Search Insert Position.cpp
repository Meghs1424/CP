class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int start = 0;
        while(len > 1) {
            if(len%2 == 0) {
                int mid = len/2;
                len = mid;
                if(nums[start + mid] == target) {
                    start = start + mid;
                    break;
                }
                else if(nums[start + mid] < target) {
                    start = start + mid;
                }
            }
            else {
                int mid = len/2;
                len = mid;
                if(nums[start + mid] == target) {
                    start = start + mid;
                    break;
                }
                else if(nums[start + mid] < target) {
                    start = start + mid + 1;
                }
            }
        }
        if (nums[start] < target) {
            start += 1;
            if(start > nums.size())
                start = nums.size();
        }
        return start;
    }
};
