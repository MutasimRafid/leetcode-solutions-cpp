class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
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