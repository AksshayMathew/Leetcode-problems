class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        int n = words.size();
        unordered_map<char,int> mpp;
        int res = 0;

        for(char c: chars)
        {
            mpp[c]++;
        }

        for(auto it:words)
        {
            bool good = true;
            unordered_map<char,int> temp;
            for(char c1:it)
            {
                temp[c1]++;
                if(temp[c1]>mpp[c1])
                {
                    good = false;
                    break;
                }
            }

            if(good)
            {
                res+=it.size();
            }
        }


       return res;
        
    }
};