class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using frequency map
        //tc: o(nlogn) ... because of map
        //sc: o(n)
        
        unordered_map<int,int> m;
        int n = nums.size();
        
        //finding frequency
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        
        int ans;
        
        for(auto it: m){
            if(it.second > n/2){
                ans = it.first;
                break;
            }
        }
        
        return ans;
    }
};