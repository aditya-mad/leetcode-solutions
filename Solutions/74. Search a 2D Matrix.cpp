class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int left = 0, right = matrix.size() * matrix[0].size() - 1, mid;
        int row = matrix[0].size();
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (matrix[mid / row][mid % row] == target)
                return true;
            else if (matrix[mid / row][mid % row] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return false;
    }
};