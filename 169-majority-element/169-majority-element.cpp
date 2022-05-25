class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        //Approach 1: Brute Force
        //use nested loop
        //TC: O(n^2)... SC:O(1)
        int cnt = 0;
        int ans;
        int n = nums.size();
        for(int i = 0;i<n;i++){
         for(int j = 0;j<n;j++){
           if(nums[i] == nums[j]){
               cnt++;
               if(cnt>n/2){
                 ans = nums[i];
                 return ans;
                 break;
               }
           }
         }
        }
        
        */
        //----------------------------------------------------------
        
        /*
        //Approach 2: optimized
        //using frequency map
        //tc: o(nlogn) ... because of map
        //sc: o(n)
        
        //std::map is a sorted associative container that contains key-value pairs with unique keys. Keys are sorted             by using the comparison function
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
        */
        //-----------------------------------------------------------------------
        
        //Approach 3: Most optimized for n/2 element
        //Moore's voting algo(only valid for n/2 elements)
        //TC: O(n) SC:O(1)
        
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
        
    }
};