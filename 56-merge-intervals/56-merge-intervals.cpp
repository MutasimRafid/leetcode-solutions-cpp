class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size() == 0){
            return res;
        }
        
        //sorting and using lamda function
        sort(intervals.begin(),intervals.end(),[](vector<int> &a, vector<int> &b){
            return a[0] < b[0];
        });
        
        //normal vector curr like [1,2]
        //interval = [[1,2],[3,4],[5,6]] 
        //intervals[0] = 1st vector element  = [[1,2]] 
        vector<int> curr = intervals[0];
        
        //comparing from second vector element
        for(int i = 1;i<intervals.size();i++){
            //[1,2].... curr[1] = 2 ... curr is 1D vector here
            //intervals[i][0] = 1st value of each vectors = [1,2] = 1
            if(curr[1] < intervals[i][0]){
                res.push_back(curr);
                //interval[i] = each inside vector 
                //intervals = [[1,2],[3,4],[5,6]]
                //interval[1] = [3,4]
                //update current
                //1st current was  = [1,2]
                //now current will be after updating = [3,4]
                curr = intervals[i];
            }
            else{
                //curr[1] > intervals[i][0]
                //curr = [1,3]...  interval = [1,3],[2,4] = comparing from 2nd value of interval = [2,4]
                //Actual Merge interval
                //but we can't just update the value as a test case
                //interval = [1,5],[2,4] = merge value is [1,5] not [1,4]
                //that's why using max function is important
                
                curr[1] = max(curr[1],intervals[i][1]);
            }
            
        }
        
        res.push_back(curr);
        return res;
    }
};