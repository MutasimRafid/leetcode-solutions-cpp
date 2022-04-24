class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        
        int idx1 = INT_MIN;
        //nums-1 : last element
        //nums - 2: 1 element before last element
        for(int i = nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1 = i;
                break;
            }
        }
        int idx2;
        
        //idx<0 that means it is already highest like: 54321
        //then print it to the minimum
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }
        else{
             idx2 = 0;
            for(int i = nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2 = i;
                    break;
                }
            }
            
             swap(nums[idx1],nums[idx2]);
        
            //will sort rest of the elemnt till end after swap element
            sort(nums.begin()+idx1+1,nums.end());
        }
        
       
    }
};