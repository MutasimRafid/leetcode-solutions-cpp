// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        //2 approach is possible
        //1. use frequency array/map
        //2. sorting 
        //here using sorting
        int* ans = new int[2];
        int rep = 0,miss = 1;
        
        sort(arr,arr+n);
        
        for(int i = 0;i<n;i++){
            //finding missing number
            if(arr[i]==miss){
                miss++;
            }
            
        }
        
        //finding repeating number
        for(int i = 0;i<n-1;i++){
            //finding missing number
            if(arr[i]==arr[i+1]){
                rep = arr[i];
            }
            
            
        }
        ans[0] = rep;
        ans[1] = miss;
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends