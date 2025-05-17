class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int sum = nums[0], maxsum = 0;
        int n = nums.size();
        for(int i=1; i<n; i++)
        {

            if(nums[i]<=nums[i-1])
            {
                maxsum = max(maxsum,sum);
                sum = 0;
            }

           sum += nums[i];
        }

        return max(maxsum,sum);
        
    }
};