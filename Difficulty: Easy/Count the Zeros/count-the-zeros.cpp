//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size();
        int target = 1;
        int start = 0;
        int end = n - 1;
        int last = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target){
                last = mid;
                start = mid + 1;
            }else if(arr[mid] < target){
                end = mid - 1;
            }
        }
        if(last == -1) return arr.size();
        return arr.size() - last - 1; 
        
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.countZeroes(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends