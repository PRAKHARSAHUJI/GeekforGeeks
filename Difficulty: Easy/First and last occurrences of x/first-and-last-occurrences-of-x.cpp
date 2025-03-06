//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        // Code here
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int first = -1;
        int last = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == x){
                first = mid;
                end = mid - 1;
            }else if(arr[mid] < x){
                start = mid + 1;
            }else if(arr[mid] > x){
                end = mid - 1;
            }
        }
        
        if(first == -1) return {-1};
        start = 0;
        end = n - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == x){
                last = mid;
                start = mid + 1;
            }else if(arr[mid] < x){
                start = mid + 1;
            }else if(arr[mid] > x){
                end = mid - 1;
            }
        }
        
        return {first,last};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> ans = obj.firstAndLast(x, arr);
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends