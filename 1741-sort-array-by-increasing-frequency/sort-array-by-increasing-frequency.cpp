class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int, int> mpp;
        for(int &num:nums)
        {
            mpp[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a,int b)
        {
            if(mpp[a] == mpp[b])
            {
                return a>b;
            }
            return mpp[a] < mpp[b];
        });
        


       return nums;
    }
};