//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int n = arr.size();
        int start = 0; 
        int end = n - 1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == 0){
                start = mid + 1;
            }
            else if(arr[mid] == 1){
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends