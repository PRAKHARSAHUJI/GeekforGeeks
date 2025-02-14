//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string& s1, string& s2) {
        // Your code here
        if(s1.length()<2){
            if(s1 == s2)
            return true;
            else 
            return false;
        }
        string ans1 = "";
        string ans2 = "";
        for(int i = 2; i < s1.length(); i++){
            ans1 += s1[i];
        }
        for(int i = 0; i < 2; i++){
            ans1 += s1[i];
        }
        
        for(int i = s1.length() - 2; i < ans1.length(); i++){
            ans2 += s1[i];
        }
        for(int i = 0; i < s1.length()-2; i++){
            ans2 += s1[i];
        }
        // cout << ans1 <<" " << ans2 <<" ";
        
        if(ans1 == s2){
            return true;
        }
        else if (ans2 == s2){
            return true;
        }
        else{
            return false;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends