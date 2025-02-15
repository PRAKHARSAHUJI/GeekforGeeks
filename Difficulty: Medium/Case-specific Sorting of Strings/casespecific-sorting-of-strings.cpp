//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        char arr[n];
        vector<char> brr;
        vector<char> crr;
        for(int i = 0; i < n; i++){
            if(s[i] >= 65 && s[i] <= 90){
                arr[i] = '.';
            }
            if(s[i] >= 97 && s[i] <= 122){
                arr[i] = '#';
            }
        }
        for(int i = 0; i < n; i++){
            if(s[i] >= 65 && s[i] <= 90){
                brr.push_back(s[i]);
            }
            if(s[i] >= 97 && s[i] <= 122){
                crr.push_back(s[i]);
            }
        }
        
        sort(brr.rbegin(),brr.rend());
        sort(crr.rbegin(),crr.rend());
        
        for(int i = 0; i < n; i++){
            if(arr[i] == '.'){
                arr[i] = brr.back();
                brr.pop_back();
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == '#'){
                arr[i] = crr.back();
                crr.pop_back();
            }
        }
        string res = "";
        
        for(int i = 0; i < n; i++){
            res += arr[i];
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends