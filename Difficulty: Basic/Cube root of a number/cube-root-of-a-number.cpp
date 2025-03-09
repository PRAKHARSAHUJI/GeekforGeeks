//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int start = 1;
        int end = n;
        int ans = 0;
        while(start <= end){
            long long mid = start + (end - start) / 2;
            
            long long cube = mid * mid * mid;
            
            if(cube == n){
                return mid;
            }else if(cube > n){
                end = mid - 1;
            }else if(cube < n){
                
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends