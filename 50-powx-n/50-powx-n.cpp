class Solution {
public:
    double myPow(double x, int n) {
        /*
        Approach 1: will get TLE
        //Brute force solution: Use loop
        //TC: O(n)  SC:O(1)
        
        
        
        double ans = 1.00;
        //if n<0.. 
        //n *= -1  because if n is given negative when looping result will be different
        // x = 1/x... because x^-n = 1/x^n
         if(n<0) x=1/x, n*=-1;
      
        for(int i = 0;i<n;i++){
            ans = ans * x;
        }
        return ans;
        
        */
        
        
        double ans = 1.0;
        long long nn = n;
        if (nn < 0) nn = -1 * nn;
        while (nn) {
          if (nn % 2) {
             ans = ans * x;
             nn = nn - 1;
          } 
          else {
             x = x * x;
             nn = nn / 2;
           }
        }
        if (n < 0) ans = (double)(1.0) / (double)(ans);
        return ans;
        
        
    }
};