class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*
        //Brute force solution:
        //approach: Take an extra array. then matrix 1st row = new arr last col.... so on...
        //TC: O(n^2) SC: O(n^2)
                    vector < vector < int >> rotate(vector < vector < int >> & matrix) {
        int n = matrix.size();
        vector < vector < int >> rotated(n, vector < int > (n, 0));
         for (int i = 0; i < n; i++) {
           for (int j = 0; j < n; j++) {
               rotated[j][n - i - 1] = matrix[i][j];
            }
         }
        return rotated;
        }
        
        */
        
        //-----------------------------------------------------------------------------
        //optimized code:TC: O(n^2)+ O(n^2)... SC: O(1)
        //by observation we can see that after transpose if we reverse each row then that's the ans
        //1. transpose the matrix
        //2. reverse each row
        
        int n = matrix.size(); //row and col size is same as it is a square matrix
        
        //now transpose the matrix
        //row will be col, col will be row
        for(int i = 0;i<n;i++){
            for(int j = 0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //now reverse the row
        //that means reverse the internal vector
        
        for(int i = 0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};