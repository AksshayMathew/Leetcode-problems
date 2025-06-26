

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char, int> freq;

        // Initialize with counts from first word
        for (char c : words[0]) {
            freq[c]++;
        }

        // Compare with each subsequent word
        for (int i = 1; i < words.size(); ++i) {
            map<char, int> temp;
            for (char c : words[i]) {
                temp[c]++;
            }
            for (auto it = freq.begin(); it != freq.end(); ) {
                it->second = min(it->second, temp[it->first]);
                if (it->second == 0) {
                    it = freq.erase(it); // remove if not common
                } else {
                    ++it;
                }
            }
        }

      
        vector<string> result;
        for (auto [c, count] : freq) {
            result.insert(result.end(), count, string(1, c));
        }
        return result;
    }
};
