class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m); // remove 0s
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());//merge
        sort(nums1.begin(), nums1.end());//sort
    }
};