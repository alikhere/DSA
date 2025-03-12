class Solution {
public://
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int l = 0, u = row*col - 1, mid;
        while(l <= u) {
            mid = (l + u)/2;//cal mid idx
            if(matrix[mid/col][mid%col] == target)
                return true;
            else {
                if(target > matrix[mid/col][mid%col])
                    l = mid + 1;
                else
                    u = mid-1;
            }
        }
        return false;
        
    }
};
//
