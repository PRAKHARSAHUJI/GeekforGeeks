//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int MOD = 1e9 + 7;
class Solution {
public:
    long long power(long long x, long long y, int mod) {
        long long res = 1;
        while (y > 0) {
            if (y % 2 == 1) 
                res = (res * x) % mod;
            x = (x * x) % mod;
            y /= 2;
        }
        return res;
    }

    int nCr(int n, int r) {
        if (r > n) return 0;
        if (r == 0 || r == n) return 1;

        // Factorial computation
        vector<long long> fact(n + 1, 1);
        for (int i = 2; i <= n; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        // Compute modular inverse using Fermat's theorem
        long long den = (fact[r] * fact[n - r]) % MOD;
        long long denInv = power(den, MOD - 2, MOD); // Modular inverse

        return (fact[n] * denInv) % MOD;
    }
};









//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends