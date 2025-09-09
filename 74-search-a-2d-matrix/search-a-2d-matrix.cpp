class Solution {
public:
    bool solve(vector<int>& row, int target) {
        int l = 0;
        int r = row.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(row[mid] == target) return true;
            else if(row[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();         
        for(int i = 0; i < rows; i++) {
            if(solve(matrix[i], target))  
                return true;
        }
        return false;
    }
};
