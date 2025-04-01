class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int res = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0}; // Fixed-size frequency array
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++; // Update frequency

                int maxi = 0, mini = INT_MAX;

                // Find max and min frequency (O(26) ≈ O(1))
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) { // Only consider existing chars
                        maxi = max(maxi, freq[k]);
                        mini = min(mini, freq[k]);
                    }
                }

                res += (maxi - mini);
            }
        }

        return res;
    }
};
