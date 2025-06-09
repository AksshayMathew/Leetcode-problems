class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        unordered_map<char, int> mpp;
        int n = s.size();
        int res = -1, len = 0;
        for(int i=0; i<n; i++)
        {
            char c = s[i];
            if(mpp.find(c) == mpp.end())
            {
                mpp[c] = i;
            }
            else
            {
                len = i - mpp[c] - 1;
                res = max(res, len);
            }

          
        }

        return res;
        
        
    }
};