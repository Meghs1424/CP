class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myList;
        for(int i=0; i<nums.size(); i++) {
            if(myList.find(nums[i]) == myList.end())
                myList.insert(nums[i]);
            else
                return true;
        }
        return false;
    }
};
