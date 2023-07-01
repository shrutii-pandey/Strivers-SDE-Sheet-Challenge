class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> op(numRows);
        for (int i = 0; i < numRows; i++) {
            op[i].resize(i + 1);
            
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    op[i][j] = 1;
                } else {
                    op[i][j] = op[i - 1][j - 1] + op[i - 1][j];
                }
            }
        }   
        return op;
    }
};
