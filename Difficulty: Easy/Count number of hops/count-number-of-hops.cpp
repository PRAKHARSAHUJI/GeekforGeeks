//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {
        int curr = 1;
        int next=1,next2 = 0,next3 = 0;
        
        for(int i = n-1; i >= 0; i--){
            curr = next+next2+next3;
            next3 = next2;
            next2 = next; 
            next = curr;
        }
        return curr;
    }
};


//{ Driver Code Starts.
int main() {
    // taking testcases
    int t;
    cin >> t;

    while (t--) {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends