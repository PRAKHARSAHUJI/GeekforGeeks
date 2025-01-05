//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& a) {
        // Your code goes here
        int n = a.size();
        vector<int> v_pos;
        vector<int> v_neg;
        vector<int> v_new;
        for(int i = 0; i < n; i++)
        {
            if(a[i]>=0)
            v_pos.push_back(a[i]);
            else
            v_neg.push_back(a[i]);
        }
        
       int index = 0;
       for(int x : v_pos)
       {
           a[index] = x;
           index++;
       }
       for(int x : v_neg)
       {
           a[index] = x;
           index++;
       }
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends