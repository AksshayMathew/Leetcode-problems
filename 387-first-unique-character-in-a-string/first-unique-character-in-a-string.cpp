class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int> mpp;
        int n = s.size();
        int index = -1;
        for(int i=0; i<n; i++)
        {
            mpp[s[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(mpp[s[i]] == 1)
            {
                index = i;
                break;
            }
            
        }

        return index;
        
    }
};