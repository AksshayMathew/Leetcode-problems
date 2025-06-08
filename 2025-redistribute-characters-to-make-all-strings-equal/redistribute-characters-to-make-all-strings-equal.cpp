class Solution {
public:
    bool makeEqual(vector<string>& words) 
    {
        unordered_map<char,int> mpp;
        int n = words.size() ;
        for(string str:words)
        {
            for(char c:str)
            {
                mpp[c]++;
            }
        }

        for(auto it:mpp)
        {    
                if(it.second % n != 0)
                {
                    return false;
                }

        }

        return true;
        
    }
};