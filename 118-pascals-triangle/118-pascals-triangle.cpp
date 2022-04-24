class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i = 0;i<numRows;i++){
            //when i = 0, element: 1 1
            //when i = 1, element: 1 2 1
            //when i = 2, element: 1 3 3 1
            //so, vector size i+1
            vector<int> v(i+1,1);
            
            for(int j = 1;j<i;j++){
                //current row i, previous row i-1
                //current col j, previous col j-1
                v[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};