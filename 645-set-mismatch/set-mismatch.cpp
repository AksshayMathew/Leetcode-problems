class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int twice = -1, miss = -1;
        for(int i=0; i<n; i++) 
        {
            mpp[nums[i]]++;
        }

        for(int i=1; i<=n; i++)  //i=0 to n  doesnt work
        {
            if(mpp[i] == 2)
            {
                twice = i;
            }


            if(mpp[i] == 0)
            {
                miss = i;
            }


        }  

        return {twice, miss};


        
    }
};