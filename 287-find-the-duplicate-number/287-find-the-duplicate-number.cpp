class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //approach
        //think like linked list
        //find the first cyclic point 
        int slow = nums[0];
        int fast = nums[0];
        
        //finding the cyclic point of the array
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
          }while(slow != fast);
        
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};