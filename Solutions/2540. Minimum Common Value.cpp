class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int left = 0, right = 0;
        int size1 = nums1.size(), size2 = nums2.size();

        while (left < size1 && right < size2)
        {
            if (nums1[left] == nums2[right])
                return nums1[left];
            else if (nums1[left] > nums2[right])
                right++;
            else
                left++;
        }

        return -1;
    }
};