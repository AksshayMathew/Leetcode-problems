class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int duplicate = 0, missing = 0;

        for(int c:nums)
        {
            mpp[c]++;
        }

        for(int i=1;i<=n;i++)   //  NOT FROM 0 TO N
        {
            if(mpp[i] == 2)
            {
               duplicate = i;
            }
            if(mpp[i] == 0)
            {
               missing = i;
            }

        }

        return {duplicate,missing};

        
    }
};