class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int n = words.size();
        unordered_map<char,int> mpp;
        int count = 0;
        for(char c: allowed)
        {
            mpp[c]++;
        }

        for(string &it:words)
        {
            unordered_map<char,int> temp;
            bool flag = true;
            for(char i:it)
            {
                temp[i]++;
                if(temp[i]>0 && mpp[i]==0)
                {
                    flag  = false;
                    break;
                }
            }

            if(flag)
            {
                count++;
            }

        }

        return count;
        
    }
};