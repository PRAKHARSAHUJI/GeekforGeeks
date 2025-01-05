//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function template for C++

class Solution {
  public:
    int distinctCount(vector<int>& arr) {
        // code
        
        unordered_set<int>set;
    for(int i = 0 ; i <arr.size();i++)
        set.insert(arr[i]);
        int cnt = 0;
    for (auto num : set)   
        {
            if(num>0)
            cnt++;
        }
        
    return cnt;
    
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.distinctCount(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends