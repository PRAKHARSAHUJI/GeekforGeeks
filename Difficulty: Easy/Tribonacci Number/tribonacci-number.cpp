//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int nthTribonacci(int n) {
        // code here
        if(n == 0)
        return 0;
        if(n==1 || n==2) return 1;
        int curr,prev,prev2,prev3;
        prev3 = 0;
        prev2 = 1;
        prev = 1;
        for(int i = 3; i <= n; i++){
            curr = prev + prev2 + prev3;
            
            prev3 = prev2;
            prev2 = prev;
            prev = curr;
        }
        return curr;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.nthTribonacci(n);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends