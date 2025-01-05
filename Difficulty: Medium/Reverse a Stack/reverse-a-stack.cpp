//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
        
        void Reverse(stack<int> &st){
        stack<int> temp1;
        stack<int> temp2;
        while(st.size()>0)
        {
            temp1.push(st.top());
            st.pop();
        }
        while(temp1.size()>0)
        {
            temp2.push(temp1.top());
            temp1.pop();
        }
        while(temp2.size()>0)
        {
            st.push(temp2.top());
            temp2.pop();
        }
        
    
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends