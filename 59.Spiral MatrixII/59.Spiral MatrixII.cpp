class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));   
        
        int row_start = 0;
        int row_end = n-1;
        int col_start = 0;
        int col_end = n-1;
        
        int num = 1;
        
        while(true) {
            //go right
            for(int i = col_start; i<= col_end; i++) {
                res[row_start][i] = num;
                num++;
            }
        
            row_start++;
            if (row_start > row_end) break;
            
            //go down
            for(int j = row_start; j<= row_end; j++) {
                res[j][col_end] = num;
                num++;
            }
            col_end--;
            if (col_start > col_end) break;
            
            //go left
            for(int i = col_end; i>= col_start; i--) {
                res[row_end][i] = num;
                num++;
            }
            
            row_end--;
            if (row_start > row_end) break;
            
            //go up
            for(int j = row_end; j>= row_start; j--) {
                res[j][col_start] = num;
                num++;
            }
            
            col_start++;
            if (col_start > col_end) break;
        }
        
        return res;
    }
};