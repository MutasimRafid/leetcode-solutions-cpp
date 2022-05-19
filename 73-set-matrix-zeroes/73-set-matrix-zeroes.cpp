class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       //Approach 3:
        //Most optimized solution: in place(no extra space)
        //imagine col = an array that stores, which col has zero 
        //algo: there was 1 array col to store which col contains zero
        //now will use the 1st row to store the same information that was in col array
        //won't use row array, instead will use bool variable in each iteration to check if that particular row has any zero or not
        //but there is 1 problem, we need to know if 1st row has any zero or not 
        //if 1st row doesn't have any zero, then (except that column has zero) all other element will remain same
        //will use a variable to keep track if 1st row has any zero or not
        int H = matrix.size();
        int W = matrix[0].size();
        
       //checking if 1st row has any zero or not
        bool first_row_zero = false;
        for(int col = 0;col<W;col++){
            if(matrix[0][col] == 0){
                first_row_zero = true;
            }
        }
        
        //storing col array information in 1st row
        for(int row = 0;row<H;row++){
            for(int col = 0;col<W;col++){
                if(matrix[row][col] == 0){
                    matrix[row][col] == 0;
                    //1st row
                    matrix[0][col] = 0;
                }
            }
        }
        
        //starting from 2nd row: i = 1.... not i = 0 
        for(int row = 1;row<H;row++){
            //if that particular row has any zero or not(loop started from 2nd row)
            bool contains_zero = false; //initiating as false
            for(int col = 0;col<W;col++){
                if(matrix[row][col] == 0){
                    contains_zero = true;//that particular row has zero
                    break;
                }
            }
            
            //now if any was zero is found, make that col element zero
            for(int col = 0;col<W;col++){
                //if that row has zero or col has zero
                if(contains_zero || matrix[0][col] == 0){
                    matrix[row][col] = 0;
                }
            }
        }
        
        //if first row has any zero, make 1st row zero
        if(first_row_zero){
            for(int col = 0;col<W;col++){
                matrix[0][col] = 0;
            }
        }
        
        
        
        /*
        //---------------------------------------------------------------------------------------------------------------
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
        */
        
        
        
       
       
        //---------------------------------------------------------------
        
    }
};