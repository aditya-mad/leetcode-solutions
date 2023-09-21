class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        for (auto x : nums2)
            nums1.push_back(x);
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        if (size & 1)
            return (double)nums1[size / 2];

        return (double)((nums1[size / 2] + nums1[(size / 2) - 1]) / 2.0);
    }
};