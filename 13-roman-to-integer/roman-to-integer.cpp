class Solution {
public:
    int romanToInt(string s) 
    {
        int n = s.length();
        unordered_map<char,int> mpp;
        for(char c:s)
        {
           if(c == 'I')
           mpp[c] = 1;
             if(c == 'V')
           mpp[c] = 5;
             if(c == 'X')
           mpp[c] = 10;
             if(c == 'L')
           mpp[c] = 50;
             if(c == 'C')
           mpp[c] = 100;
             if(c == 'D')
           mpp[c] = 500;
             if(c == 'M')
           mpp[c] = 1000;
        }

        int res = mpp[s[n-1]];
        for(int j=n-2;j>=0;j--)
        {
           
            if(mpp[s[j]] < mpp[s[j+1]])
            {
                res -= mpp[s[j]];
            }
            else
            {
                res += mpp[s[j]];
            }

        }

        return res;



        
    }
};