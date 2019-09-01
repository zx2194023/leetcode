class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;      
        
        if(matrix.empty()) return res;
        
        int row_start = 0;
        int row_end = matrix.size()-1;
        int col_start = 0;
        int col_end = matrix[0].size()-1;
       
        //cout << "row_end="<< row_end << "col_end" << col_end << endl;
        
        while(true) {
            //go right
            for(int i = col_start; i<= col_end; i++)
                res.push_back(matrix[row_start][i]);

            row_start++;
            if (row_start > row_end) break;
            
            //go down
            for(int j = row_start; j<= row_end; j++) 
                res.push_back(matrix[j][col_end]);

            col_end--;
            if (col_start > col_end) break;
            
            //go left
            for(int i = col_end; i>= col_start; i--) 
                res.push_back(matrix[row_end][i]);
            
            row_end--;
            if (row_start > row_end) break;
            
            //go up
            for(int j = row_end; j>= row_start; j--) 
                res.push_back(matrix[j][col_start]);
            
            col_start++;
            if (col_start > col_end) break;
        }
        
        return res;
    }
};