class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i = 0;i<numRows;i++){
            //i=0   numRows = 1
            //i = 1 numRows = 1 1
            //i = 2 numRows = 1 2 1
            
            
            //i = 0, vector size i+1 = 0+1 = 1
            //filling all element with 1
            //1st and last element is always 1
            //so filling all value with 1
            //will change the middle value later
            vector<int> v(i+1,1);
            
            //middle values change
            //let's say: test case: i = 2
            //i=0   numRows = 1
            //i = 1 numRows = 1 1
            //i = 2 numRows = 1 2 1
            //1st need to go previous row (i-1)
            //then current col = j + previous col = j-1
            //loop starting from j = 1 = 2nd col to before last col j<= i-1 
            for(int j = 1;j<=i-1;j++){
                //current row i, previous row i-1
                //current col j, previous col j-1
                v[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            //lastly value needs to be pushed
            ans.push_back(v);
        }
        
        return ans;
    }
};