class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //tc: o(nlogn) as map is used 
        //sc: o(n)
        
        int n = nums.size();
        vector<int> ans;
        
        unordered_map<int,int> m;
        
        //finding frequency
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        
        int elem = 0;//for pushing value
        for(auto it: m){
            if(it.second > n/3){
                //it.second is the frequency
                //it.first is the element
                //i need to return the elements stored inside a vector
                elem = it.first;
                ans.push_back(elem);
            }
        }
        
        return ans;
    }
};