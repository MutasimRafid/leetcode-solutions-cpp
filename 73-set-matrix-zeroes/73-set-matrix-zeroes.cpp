class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       //--------------------------------------------
        //approach1: Brute force
        //Algo: take 2 extra array, 1 for ROW and 1 for col
        //store which row is zero in row array and store which col is zero in col array
        //then run a loop, with the help of row and col arrays, make zero that particular row/col in the matrix
        //TC: n*m .... SC: O(n+m) 
        int H = matrix.size();
        int W = matrix[0].size();
        vector<bool> row_zero(H);
        vector<bool> col_zero(W);
        //find out how many row and col are zero
        for(int row = 0;row<H;row++){
            for(int col = 0;col<W;col++){
                if(matrix[row][col]==0){
                    row_zero[row] = true;
                    col_zero[col] = true;
                }
            }
        }
        
        //now run a loop, with the help of row and col arrays, make zero that particular row/col in the matrix
        for(int row = 0;row<H;row++){
            for(int col = 0;col<W;col++){
                //if true
                if(row_zero[row] || col_zero[col]){
                    matrix[row][col] = 0;
                }
            }
        }
        
        
        
        //---------------------------------------------
        /*
        //read khata for explanation
        // n = row size, m = col size
        int n = matrix.size(),m = matrix[0].size();
        vector<int> row(n,1);
        vector<int> col(m,1);
        
        //row vector element 0, if that particular row in main matrix is 0
        //col vector element 0, if that particular col in main matrix is 0
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        //making all row zero in the main matrix
        for(int i = 0;i<n;i++){
            if(row[i]==0){
                //till now reached row number
                //if there is a zero in that row
                //now need to make all elements 0 of that particular row
                //that means we need to go through col number
                for(int j = 0;j<m;j++){
                    matrix[i][j] = 0;
                }
            }
        }
        
        //making all col zero in the main matrix
        for(int j = 0;j<m;j++){
            if(col[j]==0){
                //till now reached col number
                //if there is a zero in that col
                //now need to make all elements 0 of that particular col
                //that means we need to go through row number
                for(int i = 0;i<n;i++){
                    matrix[i][j] = 0;
                }
            }
        }
        */
        //---------------------------------------------------------------
        
    }
};