class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        Approach 1: Brute force
        TC: O(n*m)  sc: O(1)
        algo: run nested loop. Traverse each cell/element. Find the target element
        
        //code:
        
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row;
        int m = col;
        
        for(int i = 0;i<n;i++){
         for(int j = 0;j<m;j++){
           if(matrix[i][j] == target){
              return true;
           }
         }
        }
        return false;
        
        */
        //---------------------------------------------------------------
        //Approach 2: using binary search 
        //TC: O(n*m) SC: O(1)
        //As each row is sorted. We can use binary search. 
        //as whole matrix is sorted like: each last element of a row < 1st element of next row
        //so we can think it as a 1D Matrix. And we will use binary search
        //But we won't use any extra space. we will use the corresponding matrix 
        //will use imaginary matrix
        
        
        //co ordinates of 1D array from 2D array
        //linear row = mid/col... 
        //linear col = mid%col
        
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0; //linear/1D start
        int end = row * col - 1; //linear/1D end
        
        int mid = start + (end - start)/2;
        
        while(start <= end){
            int element = matrix[mid/col][mid%col];
            
            if(element == target){
                return 1;
            }
            
            else if(element < target){
                start = mid + 1;
            }
            
            else if(element > target){
                end = mid - 1;
            }
            
            
            //reset mid
            mid = start + (end - start)/2;
        }
        return 0;
    }
    //Approach 3: 2 pointer is not written yet
    //Most optimized
};