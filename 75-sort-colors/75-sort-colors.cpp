class Solution {
public:
    void sortColors(vector<int>& nums) {
      //dutch national flag algorithm: using 3 pointer
        //TC: O(n)
        //SC: O(1)
        int low = 0;
        int high = nums.size()-1;
        int mid = 0;
        
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};