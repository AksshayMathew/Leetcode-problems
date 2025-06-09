class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> mpp;
        int res = 0;
        for(char c:s)
        {
            mpp[c]++;
            if(mpp[c] % 2 == 0)
            {
                res+=2;
            }
        }

        for(char c1:s)
        {
              if(mpp[c1] % 2 != 0)
            {
                res+=1;
                break;  //only one required
            }
        }
        return res; 
    }
};