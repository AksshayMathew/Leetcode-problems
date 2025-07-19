class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> arr(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        for(int i=1; i<n; i++)
        {
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for(int i=n-2; i>=0; i--)    // i>0 is wrong
        {
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i=0; i<n; i++)
        {
            arr[i] = prefix[i] * suffix[i];
        }

        return arr;
        
    }
};