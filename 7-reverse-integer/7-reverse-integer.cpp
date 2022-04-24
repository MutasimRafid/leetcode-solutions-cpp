class Solution {
public:
    int reverse(int x) {
        int digit = 0;
        int ans = 0;
        
        
        while(x != 0){
            digit = x % 10;
            //you can't use long long in this problem 
            //you need to use integer
            //if the result exceeds int, then return 0 in this problem
            //got wrong ans using long long
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans = ans * 10 + digit;
            x = x/10;
            
        }
        
          return ans;
    }
};