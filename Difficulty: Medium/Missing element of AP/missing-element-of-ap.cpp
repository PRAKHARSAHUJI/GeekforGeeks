//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int first_term = arr[0];
        int last_term = arr[arr.size()-1];
        
        
        int common_diff = (last_term - first_term) / (arr.size());
        
        for(int i = 0 ; i < arr.size(); i++)
        {
            if(arr[i+1] - arr[i] != common_diff)
                return arr[i]+common_diff;
        }
        
        return 0;
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

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends