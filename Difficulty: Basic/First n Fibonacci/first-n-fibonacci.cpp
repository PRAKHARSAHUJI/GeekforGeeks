//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>dp(n,-1);
        dp[0] = 0;
        dp[1] = 1;
        
        
        for(int i = 2; i < n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<int> ans = obj.fibonacciNumbers(n);

        // printing the elements of vector
        for (int i : ans)
            cout << i << ' ';
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends