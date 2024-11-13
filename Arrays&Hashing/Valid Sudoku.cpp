
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> str;
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') 
                    continue;
            string row = string(1,board[i][j]) + "ROW" + to_string(i);
            string col = string(1,board[i][j]) + "COL" + to_string(j);
            string box = string(1,board[i][j]) + "BOX" + to_string(i/3) + to_string(j/3);
            if(str.find(row) != str.end() || str.find(col) != str.end() || str.find(box) != str.end())
                return false;
            str.insert(row);
            str.insert(col);
            str.insert(box);
            }
        }
        return true;
        
    }
};
