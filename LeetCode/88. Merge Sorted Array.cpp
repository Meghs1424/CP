class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged;
        int i = 0;
        int n1 = 0, n2 = 0;
        while(i < m+n) {
            if(n1 < m && n2 < n) {
                if(nums1[n1] <= nums2[n2]) {
                    merged.push_back(nums1[n1]);
                    n1++;
                }
                else {
                    merged.push_back(nums2[n2]);
                    n2++;
                }
            }  
            else if(n1 < m) {
                merged.push_back(nums1[n1]);
                n1++;
            }
            else {
                merged.push_back(nums2[n2]);
                n2++;
            }
            i++;
        }
        for(int i=0; i<merged.size(); i++)
            nums1[i] = merged[i];
    }
};
