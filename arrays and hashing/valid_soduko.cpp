class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      
        int n = 9;
        vector<unordered_set<char>> rows(n), cols(n), boxes(n);

        for(int r=0; r<n; r++){
            for(int c=0; c<n;c++){
                int cell = board[r][c];
                if(cell == '.') continue;

                if(rows[r].count(cell)) return false;
                rows[r].insert(cell);

                if(cols[c].count(cell)) return false;
                cols[c].insert(cell);

                int boxindex = 3 *(r/3)+(c/3);
                if(boxes[boxindex].count(cell)) return false;
                boxes[boxindex].insert(cell);
            }
        }
        return true;
    }
};
